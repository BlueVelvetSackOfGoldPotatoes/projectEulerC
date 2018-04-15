/*  Project Euler solution to exercise 6  */

/*         Sum square difference          */

/* As written by Gonçalo Hora de Carvalho */
/* 16-04-18, Groningen Netherlands        */


#include <stdio.h>
#include <stdlib.h>

void main(){ // int main(int argc, char *argv[]){
  int sqsum = 0;
  int sumsq = 0;
  int sum = 0;
  int dif;
  
  for(int i = 0; i <= 100; i++){
    sumsq = sumsq + i*i;
    sum = sum + i;
  }
  sqsum = sum * sum;
  dif = sqsum - sumsq;
  printf("%d\n", dif);
}
