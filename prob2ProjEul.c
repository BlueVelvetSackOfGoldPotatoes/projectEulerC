/* Project Euler solution to exercise 2   */

/*         Even Fibonacci numbers         */

/* As written by Gonçalo Hora de Carvalho */
/* 26-03-18, Groningen Netherlands        */


#include <stdio.h>
#include <stdlib.h>

void main(){
  int sum = 0;
  int anotherTerm = 1;
  int term = 2;
  int nexTerm = 2+1;
  
   while(nexTerm <= 4000000){
		
   	if(nexTerm % 2 == 0){
		 sum =+ nexTerm;
    }
    
    anotherTerm = term;
   	term = nexTerm;
   	nexTerm = term + anotherTerm;
   }
	
  printf("%d\n", sum);
}
