#include<stdio.h>
/*
 * program to find the smallest positive number divisible
 * by all the numbers from 1 to 20
 * using brute force for now
 */

int main(){
	int i;
	int result=21;
	while(result>0){
check_next:
		for(i=1;i<=20;i++){
			if(result%i!=0){
				result++;
				goto check_next;
			}
		}
		printf("%d\n",result);
		result=-1;
	}
	return 0;
}


