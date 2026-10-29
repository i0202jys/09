#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3

void addMatrix(int A[][COL], int B[][COL], int C[][COL])
{
 int i,j;

 for(i=0;i<ROW;i++)
  for(j=0;j<COL;j++)
  C[i][j] = A[i][j] + B[i][j];
} 

void printMatrix(int A[][COL]){
 int i,j;

 for(i=0;i<ROW;i++){
  for(j=0;j<COL;j++)
    printf("%3d",A[i][j]);
  
  printf("\n");
 }
}

int main(){
    int A[ROW][COL]={
        {2,3,0},
        {8,9,1},
        {7,0,5}
    };
    int B[ROW][COL]={
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };
    int C[ROW][COL];

    addMatrix(A,B,C);
    printMatrix(C);

    return 0;


}