
/*  Project Euler solution to exercise 4  */

/*       Largest palindrome product       */

/* As written by Gonçalo Hora de Carvalho */
/* 07-04-18, Groningen Netherlands        */


#include <stdio.h>
#include <stdlib.h>

void main(){ // int main(int argc, char *argv[]){
	int digits = 0;
	int n;
	int dummy;
	
	/*for(int a = 999; a > 0; a--) {
		
		for(int b = a-1; b > 0; b--) {
			
			n = a*b;
			dummy = n;

		*/
		dummy = 1234;//
		n = 1234;//
		//cool v
			while(dummy != 0){
				digits++;
				dummy = dummy/10;	
			}
		//---^
		
			//cool v
			int *number = malloc(digits*sizeof(int));
			//---^
			
			for(int i = 0; n > 0; i++){
				dummy = n%10;
				n = n/10;
				number[i] = dummy;
			}

			for(; digits > 0; digits--){//
				printf("%d\n", number[digits]);//
			}//
		}
		//free(number);
	//}
//}

