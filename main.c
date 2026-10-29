#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(){
 int grade[SIZE];
 int i,aver;
 int sum=0;

  for (i=0;i<SIZE;i++){
    printf("input students's grade\n");
 scanf("%d",&grade[i]);
 sum += grade[i];
 }

 aver = sum/SIZE;
 printf("average is %d\n",aver);
 
 return 0;

}