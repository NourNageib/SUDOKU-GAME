/***********************************/
/*	        SUDOKU GAME            */
/*	Author 	  : Nour Abd-elaziz    */
/*	Version   : 1.0                */
/*	Date	  : JUNE 14 , 2023     */
/*	Last Edit : N/A                */
/***********************************/

                        /*******************************************************************************/
                        /********************       SUDOKU GAME APIs     *******************************/
                        /*******************************************************************************/
						
void PrintGame(char (*Sudoku)[SIZE],int x);
char  ChooseGameLevel(void);
void StartGame(char (*Sudoku)[SIZE],int x,char *flag,char*flag2);
void AddNumber(char (*Sudoku)[SIZE],int num,int row,char col,int x);
void row_col_subarray(char (*Sudoku)[SIZE],int num,int row,char col);
char ReservedPlaceEasyLevel(int row,char col);
char ReservedPlaceHardLevel(int row,char col);
void Warning();
char CheckRow(char (*Sudoku)[SIZE],char num,int row);
char CheckColoumn(char (*Sudoku)[SIZE],char num,char col);
void DeleteNumber(char (*Sudoku)[SIZE],int row,char col,int x);
char checkSub2DArray(char (*Sudoku)[SIZE],int num,int row,char col);
void Lose_Sound();
void StatSound();
char CheckEmptyPlaces(char (*Sudoku)[SIZE]);
void WinningMessage(void);
void Solution(int x);
void PrintSolution(char (*Sudoku)[SIZE],int x);
