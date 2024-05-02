#include <windows.h>
#include <stdio.h>
#include<time.h>
#include "header.c"
#define SIZE 9
char Sudoku_Easy_Level[SIZE][SIZE]=  {{0,1,0,0,9,6,8,3,0},
                                      {9,3,0,2,0,0,0,4,0},
                                      {8,2,4,7,0,3,1,0,0},
                                      {0,0,5,9,0,0,0,0,0},
                                      {6,0,0,0,8,5,4,2,9},
                                      {2,0,8,0,0,4,0,6,1},
                                      {7,0,0,0,3,0,0,8,0},
                                      {0,0,0,8,0,0,0,0,3},
                                      {0,0,1,0,4,9,2,0,7}};

char Sudoku_Easy_LevelSolution[SIZE][SIZE]=  {{5,1,7,4,9,6,8,3,2},
                                              {9,3,6,2,1,8,7,4,5},
                                              {8,2,4,7,5,3,1,9,6},
                                              {1,4,5,9,6,2,3,7,8},
                                              {6,7,3,1,8,5,4,2,9},
                                              {2,9,8,3,7,4,5,6,1},
                                              {7,6,2,5,3,1,9,8,4},
                                              {4,5,9,8,2,7,6,1,3},
                                              {3,8,1,6,4,9,2,5,7}};

char Sudoku_Medium_Level[SIZE][SIZE]={{0,3,5,6,7,0,0,0,0},
                                      {4,0,0,8,2,9,5,0,0},
                                      {0,8,0,0,0,3,0,6,0},
                                      {0,2,0,0,0,5,8,0,7},
                                      {8,0,0,2,0,6,0,0,5},
                                      {3,0,1,7,0,0,0,2,0},
                                      {0,4,0,9,0,0,0,7,0},
                                      {0,0,2,4,8,7,0,0,6},
                                      {0,0,0,0,5,2,4,9,0}};

char Sudoku_Medium_LevelSolution[SIZE][SIZE]={{1,3,5,6,7,4,9,8,2},
                                              {4,7,6,8,2,9,5,1,3},
                                              {2,8,9,5,1,3,7,6,4},
                                              {6,2,4,1,9,5,8,3,7},
                                              {8,9,7,2,3,6,1,4,5},
                                              {3,5,1,7,4,8,6,2,9},
                                              {5,4,3,9,6,1,2,7,8},
                                              {9,1,2,4,8,7,3,5,6},
                                              {7,6,8,3,5,2,4,9,1}};

char Sudoku_Hard_Level[SIZE][SIZE]={{0,0,7,9,0,5,0,0,0},
                                    {0,6,0,0,0,7,8,0,5},
                                    {0,0,0,0,4,0,0,0,6},
                                    {0,1,0,6,0,0,0,0,0},
                                    {8,2,0,0,0,0,0,1,3},
                                    {0,0,0,0,0,4,0,6,0},
                                    {2,0,0,0,5,0,0,0,0},
                                    {1,0,3,2,0,0,0,7,0},
                                    {0,0,0,4,0,1,2,0,0}};
char Sudoku_Hard_LevelSolution[SIZE][SIZE]={{3,8,7,9,6,5,1,4,2},
                                            {4,6,2,3,1,7,8,9,5},
                                            {5,9,1,8,4,2,7,3,6},
                                            {9,1,4,6,8,3,5,2,7},
                                            {8,2,6,5,7,9,4,1,3},
                                            {7,3,5,1,2,4,9,6,8},
                                            {2,4,9,7,5,6,3,8,1},
                                            {1,5,3,2,9,8,6,7,4},
                                            {6,7,8,4,3,1,2,5,9}};

int main()
 {
        StatSound();
     char flag=0,flag2=0;
        while(!flag2)
        {
            flag2=0;
        char choice=ChooseGameLevel();

        switch (choice)
        {
            case 1 :
                {
                     while(flag2==0)
                        {
                           StartGame(Sudoku_Easy_Level,1,&flag,&flag2);
                           if(flag)
                           {
                               break;
                           }
                        }
                }break;
            case 2:
              {
                  while(flag2==0)
                        {
                           StartGame(Sudoku_Medium_Level,2,&flag,&flag2);
                             if(flag)
                           {
                               break;
                           }
                        }
                }break;
           case 3:
              {
                  while(flag2==0)
                        {
                           StartGame(Sudoku_Hard_Level,3,&flag,&flag2);
                             if(flag)
                           {
                               break;
                           }
                        }
                }break;

        }
        }





        return 0;
}
void PrintGame(char (*Sudoku)[SIZE],int x)
{
    char flag=1;
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    const int red = FOREGROUND_RED | FOREGROUND_INTENSITY;
    const int green = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
    const int yellow = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
    const int white =FOREGROUND_INTENSITY;
    const int blue =FOREGROUND_BLUE | FOREGROUND_INTENSITY;
     SetConsoleTextAttribute(hConsole, green);
    printf("   \"Welcome to SUDOKU Game\"\n");
    SetConsoleTextAttribute(hConsole, red);
    printf("*********************************\n");
    printf("***********SUDOKO GAME**********\n");
    printf("********************************\n");
    for(int r=0;r<SIZE;r++)
    {
        SetConsoleTextAttribute(hConsole, green);
        if(r==0)
        {
            printf(" | A  B  C | D  E  F | G  H  I |");
        }
        if(r==0||r==3||r==6)
            printf("\n--------------------------------");
        else
        printf("\n--         -         -         -");
        printf("\n%d|",r);

           for(int c=0;c<SIZE;c++)
            {
                    if(c==3||c==6)
                         {
                             printf("|");
                         }
                         if(x==1)
                         {
                             if(!ReservedPlaceEasyLevel(r,c))
                             {
                                  SetConsoleTextAttribute(hConsole, yellow);
                                 printf(" %d ",Sudoku[r][c]);
                             }

                            else
                             {
                                 SetConsoleTextAttribute(hConsole, blue);
                                 printf(" %d ",Sudoku[r][c]);
                             }
                         }
                         else if(x==2)
                         {
                              if(!ReservedPlaceMediumLevel(r,c))
                             {
                                  SetConsoleTextAttribute(hConsole, yellow);
                                 printf(" %d ",Sudoku[r][c]);
                             }

                            else
                             {
                                 SetConsoleTextAttribute(hConsole, blue);
                                 printf(" %d ",Sudoku[r][c]);
                             }
                         }
                         else if(x==3)
                         {
                              if(!ReservedPlaceHardLevel(r,c))
                             {
                                  SetConsoleTextAttribute(hConsole, yellow);
                                 printf(" %d ",Sudoku[r][c]);
                             }

                            else
                             {
                                 SetConsoleTextAttribute(hConsole, blue);
                                 printf(" %d ",Sudoku[r][c]);
                             }
                         }


            }


        SetConsoleTextAttribute(hConsole, green);
        printf("|");

    }
    printf("\n-------------------------------\n\n");

}
char  ChooseGameLevel(void)
{
    int choice;
          HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        const int red = FOREGROUND_RED | FOREGROUND_INTENSITY;
        const int green = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
        const int yellow = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
        const int blue =FOREGROUND_BLUE | FOREGROUND_INTENSITY;
         SetConsoleTextAttribute(hConsole, green);
        printf("   \"Welcome to SUDOKU Game\"\n");
        SetConsoleTextAttribute(hConsole, red);
        printf("*********************************\n");
        printf("***********SUDOKO GAME**********\n");
        printf("********************************\n");
        SetConsoleTextAttribute(hConsole, blue);
        printf("**choose from the following options**\n");
        printf("****Please choose  game level****\n");

            SetConsoleTextAttribute(hConsole, yellow);
             printf("1-EASY LEVEL \n2-MEDIUM LEVEL\n3-HARD LEVEL\n");
            scanf("%d",&choice);

        switch(choice)
        {
            case 1: return 1;break;
            case 2: return 2;break;
            case 3: return 3;break;
        }

}

void StartGame(char (*Sudoku)[SIZE],int x,char *flag,char*flag2)
{
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        const int red = FOREGROUND_RED | FOREGROUND_INTENSITY;
        const int green = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
        const int yellow = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
        const int blue =FOREGROUND_BLUE | FOREGROUND_INTENSITY;
        int  choice=0,number,row;char col;
        SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

        switch (x)
        {
            case 1:PrintGame(Sudoku,1);break;
            case 2:PrintGame(Sudoku,2);break;
            case 3:PrintGame(Sudoku,3);break;
        }

         if(CheckEmptyPlaces(Sudoku))
            {
                WinningMessage();
                *flag2=1;

            }
            else
            {
                SetConsoleTextAttribute(hConsole, blue);
                printf("**choose from the following options**\n");

                SetConsoleTextAttribute(hConsole, yellow);
                printf("1-Add a number\n2-Delete Number\n3-New Game\n4-EXIT\n");
                scanf("%d",&choice);
             if (choice>=1 && choice <=4)
                {
                    SetConsoleTextAttribute(hConsole, blue);

                }
                else
                {
                    printf("Only enter number between 1 to 4\n");
                }

            }



        switch(choice)
        {
                case 1:
                    {
                        printf("Please enter row number:\n ");
                        scanf("%d",&row);
                         fflush(stdin);
                        printf("Please enter column number:\n ");
                        scanf("%c",&col);
                        printf("Enter number :\n");
                        scanf("%d",&number);
                        if(col>='A' && col<='Z')
                        {
                            col=col-'A';
                        }

                        else if(col>='a' && col<='z')
                          {
                            col=col-'a';
                        }
                        AddNumber(Sudoku,number,row,col,x);

                    }break;
                case 2:
                    {
                        printf("Please enter row number:\n ");
                        scanf("%d",&row);
                        fflush(stdin);
                        printf("Please enter column number:\n ");
                        scanf("%c",&col);
                         if(col>='A' && col<='Z')
                        {
                            col=col-'A';
                        }

                        else if(col>='a' && col<='z')
                          {
                            col=col-'a';
                        }
                        DeleteNumber(Sudoku,row,col,x);
                    }break;
                case 3:
                    {
                        system("cls");
                        *flag=1;

                    }break;
                case 4:
                    {
                        system("cls");
                        Solution(x);
                        *flag2=1;

                    }break;

        }
}
void AddNumber(char (*Sudoku)[SIZE],int num,int row,char col,int x)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    const int red = FOREGROUND_RED | FOREGROUND_INTENSITY;
    const int green = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
    const int yellow = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
    const int blue =FOREGROUND_BLUE | FOREGROUND_INTENSITY;

    if(!(num>=1 && num <=SIZE))
    {

        Beep(1000,333);
        SetConsoleTextAttribute(hConsole, red);
        printf("\nInvalid you must enter numbers between [0,9] !\n\n");
    }

    if(x==1)
    {
        if(!ReservedPlaceEasyLevel(row,col))
        {
            Warning();
        }
         else
        {
            row_col_subarray(Sudoku,num,row,col);
        }

      }
    if(x==2)
    {
        if(!ReservedPlaceMediumLevel(row,col))
        {
            Warning();
        }
         else
        {
            row_col_subarray(Sudoku,num,row,col);
        }

    }
     if(x==3)
    {
        if(!ReservedPlaceHardLevel(row,col))
        {
            Warning();
        }
        else
        {
            row_col_subarray(Sudoku,num,row,col);
        }

    }

}
void row_col_subarray(char (*Sudoku)[SIZE],int num,int row,char col)
{
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    const int red = FOREGROUND_RED | FOREGROUND_INTENSITY;
    const int green = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
    const int yellow = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
    const int blue =FOREGROUND_BLUE | FOREGROUND_INTENSITY;
     if((checkSub2DArray(Sudoku,num,row,col))==0)
    {

        Beep(1000,333);
        SetConsoleTextAttribute(hConsole, red);
         printf("\nThis number already found in same Sub-array!\nTRY AGAIN!\n\n");
    }
    else  if((CheckRow(Sudoku,num,row)) && (CheckColoumn(Sudoku,num,col)) && (checkSub2DArray(Sudoku,num,row,col)))
    {
            printf("The number is added!\n\n");
            Sudoku[row][col]=num;

    }
    else if((!(CheckRow(Sudoku,num,row))) && (!(CheckColoumn(Sudoku,num,col))))
        {

            Beep(1000,333);
            SetConsoleTextAttribute(hConsole, red);
            printf("\nThis number already found in same row or column!\nTRY AGAIN!\n\n");
        }
}
char ReservedPlaceEasyLevel(int row,char col)
{
    if((row==0 && col==1) || (row==0 && col==4) ||(row==0 && col==5) || (row==0 && col==6) ||(row==0 && col==7))
    {
        return 0;
    }
    else if((row==1 && col==0) ||(row==1 && col==1)||(row==1 && col==3)||(row==1 && col==7))
    {
       return 0;
    }
    else if((row==2 && col==0) || (row==2 && col==1) ||(row==2 && col==2)||(row==2 && col==3)||(row==2 && col==5)||(row==2 && col==6))
    {
        return 0;

    }
    else if((row==3 && col==2)||(row==3 && col==3))
    {
        return 0;

    }
    else if((row==4 && col==0)||(row==4 && col==4) || (row==4 && col==5)||(row==4 && col==6)||(row==4 && col==7)||(row==4 && col==8))
    {
        return 0;
    }
    else if((row==5 && col==0)||(row==5 && col==2) || (row==5 && col==5)|| (row==5 && col==7)|| (row==5 && col==8))
    {
        return 0;
    }
    else if((row==6 && col==0)||(row==6 && col==4) || (row==6 && col==7))
    {
        return 0;

    }
    else if((row==7 && col==3)||(row==7 && col==8) )
    {
        return 0;
    }
    else if((row==8 && col==2)||(row==8 && col==4) || (row==8 && col==5)|| (row==8 && col==6)|| (row==8 && col==8))
    {
         return 0;
    }
    return 1;
}
char ReservedPlaceMediumLevel(int row,char col)
{
    if((row==0 && col==1) || (row==0 && col==2) ||(row==0 && col==3) || (row==0 && col==4) )
    {
        return 0;
    }
    else if((row==1 && col==0) ||(row==1 && col==3) ||(row==1 && col==4)||(row==1 && col==5)||(row==1 && col==6))
    {
       return 0;
    }
    else if((row==2 && col==1) || (row==2 && col==5) ||(row==2 && col==7))
    {
        return 0;

    }
    else if((row==3 && col==1)||(row==3 && col==5) || (row==3 && col==8) ||(row==3 && col==6))
    {
        return 0;

    }
    else if((row==4 && col==0)||(row==4 && col==3) || (row==4 && col==5)|| (row==4 && col==8))
    {
        return 0;
    }
    else if((row==5 && col==0)||(row==5 && col==2) || (row==5 && col==3)|| (row==5 && col==7))
    {
        return 0;
    }
    else if((row==6 && col==1)||(row==6 && col==3) || (row==6 && col==7))
    {
        return 0;

    }
    else if((row==7 && col==2)||(row==7 && col==3) || (row==7 && col==4)|| (row==7 && col==5)|| (row==7 && col==8))
    {
        return 0;
    }
    else if((row==8 && col==4)||(row==8 && col==5) || (row==8 && col==6)|| (row==8 && col==7))
    {
         return 0;
    }
    return 1;
}
char ReservedPlaceHardLevel(int row,char col)
{
    if((row==0 && col==2) || (row==0 && col==3) ||(row==0 && col==5) )
    {
        return 0;
    }
    else if((row==1 && col==1) ||(row==1 && col==5) ||(row==1 && col==6)||(row==1 && col==8))
    {
       return 0;
    }
    else if( (row==2 && col==4) ||(row==2 && col==8))
    {
        return 0;

    }
    else if((row==3 && col==1)||(row==3 && col==3) )
    {
        return 0;

    }
    else if((row==4 && col==0)||(row==4 && col==1) || (row==4 && col==7)|| (row==4 && col==8))
    {
        return 0;
    }
    else if((row==5 && col==5)|| (row==5 && col==7))
    {
        return 0;
    }
    else if((row==6 && col==0)||(row==6 && col==4) )
    {
        return 0;

    }
    else if((row==7 && col==0)||(row==7 && col==2) || (row==7 && col==3)|| (row==7 && col==7))
    {
        return 0;
    }
    else if((row==8 && col==3) || (row==8 && col==5)|| (row==8 && col==6))
    {
         return 0;
    }
    return 1;
}
void Warning()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    const int red = FOREGROUND_RED | FOREGROUND_INTENSITY;

        SetConsoleTextAttribute(hConsole, red);
        Beep(1000,333);
        printf("\nInvalid you don't have an access on this position\n\n");
}
char CheckRow(char (*Sudoku)[SIZE],char num,int row)
{
    for(int i=0;i<SIZE;i++)
    {
        if(Sudoku[row][i]==num)
        return 0;
    }

    return 1;
}
char CheckColoumn(char (*Sudoku)[SIZE],char num,char col)
{
    for(int i=0;i<SIZE;i++)
    {
        if(Sudoku[i][col]==num)
        return 0;
    }

    return 1;
}
void DeleteNumber(char (*Sudoku)[SIZE],int row,char col,int x)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    const int red = FOREGROUND_RED | FOREGROUND_INTENSITY;
    const int green = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
    const int yellow = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
    const int blue =FOREGROUND_BLUE | FOREGROUND_INTENSITY;
   if(x==1)
    {
        if(!ReservedPlaceEasyLevel(row,col))
        {
            Warning();
        }
        else
        {
            SetConsoleTextAttribute(hConsole, yellow);
            printf("The number is deleted!\n\n");
            Sudoku[row][col]=0;
        }
    }
    if(x==2)
    {
        if(!ReservedPlaceMediumLevel(row,col))
        {
            Warning();
        }
        else
        {
            SetConsoleTextAttribute(hConsole, yellow);
            printf("The number is deleted!\n\n");
            Sudoku[row][col]=0;
        }

    }
     if(x==3)
    {
        if(!ReservedPlaceHardLevel(row,col))
        {
            Warning();
        }
        else
        {
            SetConsoleTextAttribute(hConsole, yellow);
            printf("The number is deleted!\n\n");
            Sudoku[row][col]=0;
        }

    }

}
char checkSub2DArray(char (*Sudoku)[SIZE],int num,int row,char col)
{
    int start_col_index=col-(col%3);
    int start_row_index=row-(row%3);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(Sudoku[start_row_index+i][start_col_index+j]==num)
            {
               return 0;
            }
        }
        printf("\n");
    }
    return 1;

}
void Lose_Sound()
{

        Beep (1254, 300);
        Beep (400, 300);
}
void StatSound()
{
    Beep(234,230);
    Beep(405,399);
    Beep(234,230);
}
char CheckEmptyPlaces(char (*Sudoku)[SIZE])
{
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            if(Sudoku[i][j]==0)
                return 0;
        }
    }
    return 1;
}
void WinningMessage(void)
{
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    const int red = FOREGROUND_RED | FOREGROUND_INTENSITY;
    const int green = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
    const int yellow = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
    const int blue =FOREGROUND_BLUE | FOREGROUND_INTENSITY;
    for(int i=0;i<2;i++)
    {
        Beep(845,333);
        SetConsoleTextAttribute(hConsole, blue);
         printf("********** ^ _ ^ CONGRATULATIONS LEVEL COMPLETED  ^ _ ^ **********\n");
    }
     for(int i=0;i<2;i++)
    {
        Beep(845,333);
        SetConsoleTextAttribute(hConsole, yellow);
         printf("********** ^ _ ^ CONGRATULATIONS LEVEL COMPLETED  ^ _ ^ **********\n");
    }
     for(int i=0;i<2;i++)
    {
        Beep(845,333);
        SetConsoleTextAttribute(hConsole, green);
         printf("********** ^ _ ^ CONGRATULATIONS LEVEL COMPLETED  ^ _ ^ **********\n");
    }

}
void Solution(int x)
{

    printf("*******GAME SOLUTION*************\n");
    switch (x)
    {
            case 1:
                {
                    PrintSolution(Sudoku_Easy_LevelSolution,1);
                }break ;
            case 2:
                {
                    PrintSolution(Sudoku_Medium_LevelSolution,1);
                }break ;
            case 3:
                {
                    PrintSolution(Sudoku_Hard_LevelSolution,1);
                }break ;
    }
    Beep(898,200);
    printf("***********GOOD BYE***************\n");
}
void PrintSolution(char (*Sudoku)[SIZE],int x)
{
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    const int red = FOREGROUND_RED | FOREGROUND_INTENSITY;
    const int green = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
    const int yellow = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
    const int blue =FOREGROUND_BLUE | FOREGROUND_INTENSITY;
    switch(x)
    {
            case 1:
                {
                     for(int r=0;r<SIZE;r++)
                        {
                            SetConsoleTextAttribute(hConsole, green);
                            if(r==0)
                            {
                                printf(" | A  B  C | D  F  G | H  I  G |");
                            }
                            if(r==0||r==3||r==6)
                                printf("\n--------------------------------");
                            else
                            printf("\n--         -          -        -");
                            printf("\n%d|",r);

                               for(int c=0;c<SIZE;c++)
                                {
                                        if(c==3||c==6)
                                             {
                                                 printf("|");
                                             }
                                          if(!ReservedPlaceEasyLevel(r,c))
                                                     {
                                                          SetConsoleTextAttribute(hConsole, yellow);
                                                         printf(" %d ",Sudoku[r][c]);
                                                     }

                                                    else
                                                     {
                                                         SetConsoleTextAttribute(hConsole, blue);
                                                         printf(" %d ",Sudoku[r][c]);
                                                     }
                                }
                                SetConsoleTextAttribute(hConsole, green);
                               printf("|");
                        }



                           printf("\n-------------------------------\n\n");
                }break;
            case 2:
                {
                    for(int r=0;r<SIZE;r++)
                        {
                            SetConsoleTextAttribute(hConsole, green);
                            if(r==0)
                            {
                                printf(" | A  B  C | D  F  G | H  I  G |");
                            }
                            if(r==0||r==3||r==6)
                                printf("\n--------------------------------");
                            else
                            printf("\n--         -          -        -");
                            printf("\n%d|",r);

                               for(int c=0;c<SIZE;c++)
                                {
                                        if(c==3||c==6)
                                             {
                                                 printf("|");
                                             }
                            if(!ReservedPlaceMediumLevel(r,c))
                             {
                                  SetConsoleTextAttribute(hConsole, yellow);
                                 printf(" %d ",Sudoku[r][c]);
                             }

                            else
                             {
                                 SetConsoleTextAttribute(hConsole, blue);
                                 printf(" %d ",Sudoku[r][c]);
                             }
                                }
                                SetConsoleTextAttribute(hConsole, green);
                           printf("|");
                        }



                           printf("\n-------------------------------\n\n");
                }break;
            case 3:
                {
                    for(int r=0;r<SIZE;r++)
                        {
                            SetConsoleTextAttribute(hConsole, green);
                            if(r==0)
                            {
                                printf(" | A  B  C | D  F  G | H  I  G |");
                            }
                            if(r==0||r==3||r==6)
                                printf("\n--------------------------------");
                            else
                            printf("\n--         -          -        -");
                            printf("\n%d|",r);

                               for(int c=0;c<SIZE;c++)
                                {
                                        if(c==3||c==6)
                                             {
                                                 printf("|");
                                             }
                            if(!ReservedPlaceHardLevel(r,c))
                             {
                                  SetConsoleTextAttribute(hConsole, yellow);
                                 printf(" %d ",Sudoku[r][c]);
                             }

                            else
                             {
                                 SetConsoleTextAttribute(hConsole, blue);
                                 printf(" %d ",Sudoku[r][c]);
                             }
                                }
                                SetConsoleTextAttribute(hConsole, green);
                           printf("|");
                        }



                           printf("\n-------------------------------\n\n");
                             }break;
    }
}
