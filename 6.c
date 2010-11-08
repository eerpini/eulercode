#include<stdio.h>
/*
 * program to find the difference between the sum of the squares of
 * the first 100 natural numbers and the square of the sums of the 
 * first 100 natural numbers
 * BRUTE FORCE
 */
int main(){
	int i;
	long sofsq=0,sqofs=0;

	for(i=1;i<=100;i++){
		sofsq+=(i*i);
		sqofs+=i;
	}
	sqofs*=sqofs;
	printf("%ld",sqofs-sofsq);
	return 0;
}

