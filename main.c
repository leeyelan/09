#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void){
	int i;
	int grade[SIZE];
	int score[SIZE];
	
	for(i=0; i<SIZE; i++)
	{
	grade[i] = rand()%100;
	}

    for(i=0; i<SIZE; i++)
    
    score[i] = grade[i];
    
    for(i=0; i<SIZE; i++)
    printf("score[%d] = %i (%i)\n",i,score[i],grade[i]);
    
    

     return 0;
}
