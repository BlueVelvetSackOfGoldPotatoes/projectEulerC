/* Project Euler solution to exercise 1   */

/*          Multiples of 3 and 5          */

/* As written by Gonçalo Hora de Carvalho */
/* 24-12-17, Groningen Netherlands        */


#include <stdio.h>
#include <stdlib.h>

void main(){
	int sum = 0;
	for(int i = 1; i < 1000; i++){
		if((i % 3 == 0)||(i % 5 == 0)){
		 sum = sum + i;
		}
	}
	printf("%d\n", sum);
}
