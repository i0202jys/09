#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(){
 int grade[SIZE]={1,2,3,4,5};
 int score[SIZE]={1,2,5,4,5};
 int i;


if(grade==score){//3-1 실습
    printf("same\n");
} 
else{
    printf("differ\n");
}

for(i=0;i<SIZE;i++){//3-2 실습
    if (grade[i] != score[i]){
        printf("index %i differ\n",i);
    }
}

 
 return 0;

}