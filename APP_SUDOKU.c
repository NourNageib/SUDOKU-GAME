/***********************************/
/*	        SUDOKU GAME            */
/*	Author 	  : Nour Abd-elaziz    */
/*	Version   : 1.0                */
/*	Date	  : JUNE 14 , 2023     */
/*	Last Edit : N/A                */
/***********************************/
#include "sudoku.h"

                        /**********************************************************************************/
                        /********************           SUDOKU GAME         *******************************/
                        /**********************************************************************************/
extern char Sudoku_Easy_Level[SIZE][SIZE];
extern char Sudoku_Easy_LevelSolution[SIZE][SIZE];

extern char Sudoku_Medium_Level[SIZE][SIZE];
extern char Sudoku_Medium_LevelSolution[SIZE][SIZE];

extern char Sudoku_Hard_Level[SIZE][SIZE];
extern char Sudoku_Hard_LevelSolution[SIZE][SIZE];

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