
/* Project Euler solution to exercise 3   */

/*          Largest prime factor          */

/* As written by Gonçalo Hora de Carvalho */
/* 26-03-18, Groningen Netherlands        */

#include <stdio.h>
#include <stdlib.h>

int n = 600851475143;

int gettingPrime(int f){

	for(int a = 1; a <= f/2; a++){
		for(int b = f/2; b > 0; b--){
			if((b != 1) && (a!=f)){
				return 0;
			}
		}
	}
	return 1;
}

void main() {//int main(int argc, char *argv[]){
	
	 int a = n/2;
	 int b = n/2 - 1;
	 int factor;
	 int maxFactor;
	 
	 while(a != 0) { 
		 while(b != 0) {
			 if(a * b == n) {
				 if(a >= b) {
					factor = gettingPrime(a);
					maxFactor = a;
				} else{
					factor = gettingPrime(b);
					maxFactor = b;
				}
				if(factor == 0) {
					maxFactor = n;
				}
			 }
			 b--;
		 }
		 a--;
	 }
	 
	printf("The max prime factor is: %d\n", maxFactor);
}
