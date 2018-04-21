/*  Project Euler solution to exercise 7  */

/*            10001st prime               */

/* As written by Gonçalo Hora de Carvalho */
/* 21-04-18, Groningen Netherlands        */

int isPrime(int n){
  for(i = 7; i < n; i+2){
    if(n % i == 0){
      return 0;
  }
  return 1;
}

#include <stdio.h>
#include <stdlib.h>

void main(){ // int main(int argc, char *argv[]){
  int counter = 6;
  int i = 13;
  
  while(counter <= 10001){
    if(i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0){
      i =+ 2;
      break;
    }

    if(isPrime(i) == 1){
      counter++;
    }
    i =+ 2;
  }
  printf("%d\n", i);

}
