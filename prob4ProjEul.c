
/*  Project Euler solution to exercise 4  */

/*       Largest palindrome product       */

/* As written by Gonçalo Hora de Carvalho */
/* 07-04-18, Groningen Netherlands        */


#include <stdio.h>
#include <stdlib.h>

//Its still wrong - yielding 580085 instead of 906609

int isPalindrome(int n){
	int digits[6];
	int k = 0;
	int dummy = n;
	
	for(int i = 5; i >= 0; i--){
		digits[i] = dummy % 10;
		dummy = dummy / 10;
	}

	for(int i = 5; i >= 3; i--){
		if(digits[i] != digits[k]){
			return 0;
		}
		k++;
	}
	printf("%d\n", n);
	return 1;
}

void main(){ // int main(int argc, char *argv[]){
	int a = 999;
	int b = 998;
	int n; 
	
	do {
		n = a * b;
		b--;
		
		if(b < 100){
			a = a-1;
			b = a-1;
		}
		
	}while(isPalindrome(n) == 0);
}
