/***********************************/
/*	        SUDOKU GAME            */
/*	Author 	  : Nour Abd-elaziz    */
/*	Version   : 1.0                */
/*	Date	  : JUNE 14 , 2023     */
/*	Last Edit : N/A                */
/***********************************/

#include "sudoku.h"
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
