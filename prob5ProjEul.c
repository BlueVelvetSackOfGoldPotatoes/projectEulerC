/* Project Euler solution to exercise 5   */

/*           Smallest multiple            */
 
/* As written by Gonçalo Hora de Carvalho */
/* 15-04-18, Groningen Netherlands        */


#include <stdio.h>
#include <stdlib.h>

void main(){
	int i = 2520;
	int n = 1;
	do{
		if(i % n == 0){
			n++;
		}else {
			i++;
			n = 1;
		}
	}while(n < 21);
	printf("%d\n",i);
}
