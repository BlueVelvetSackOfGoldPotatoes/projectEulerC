/*  Project Euler solution to exercise 8  */

/*      Largest product in a series       */

/* As written by Gonçalo Hora de Carvalho */
/* 15-07-18, Groningen Netherlands        */

#include <stdio.h>
#include <stdlib.h>

int  n = 73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450;

void main(){
	/*So, everytime you encounter a zero you know the multiplication is going to be 0
	 * and therefore you divide the dummy by 10 13 times and try again*/
	 
	 /*The idea is to keep subtracting digits while multiplying them by each other
	  * until 13 digits have been selected - while loop that stops when the 
	  * we cant get 13 numbers and a for loop that goes through the 13 digits. */
	  
	  /*How do we account for the different ways of pairing 13 numbers (starting 
	   * from the first digit v starting from the last digit)? we can hardcode it - disgusting*/
	dummy_n = n; 
	for(int i = 0; i<12; i++){
		a = dummy_n % 1000;
		if (a == 0){
			dummy_n = 
		}
		dummy_n -= a;
		prod = 
	}
	
}
