/* Project Euler solution to exercise 2   */

/*         Even Fibonacci numbers         */

/* As written by Gonçalo Hora de Carvalho */
/* 26-03-18, Groningen Netherlands        */


#include <stdio.h>
#include <stdlib.h>

void main(){
	int sum = 0;
  int term = 1;
  int nextTerm = 2;
  
	while(term <= 4000000){
		
    if(term % 2 == 0){
		 sum += term;
    }
    
    term = nextTerm;
    nextTerm += term;
	}
	
  printf("%d\n", sum);
}
