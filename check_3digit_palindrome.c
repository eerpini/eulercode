#include<stdio.h>
#include<string.h>

int palindrome(char *string){
	int len = strlen(string);
	int i;
	for(i=0;i<len;i++)
		if(string[i]!=string[len-1-i])
			return 0;
	return 1;
}

int main(int argc, char **argv){
	int i,j,result;
	char number[10];
	for (i=100;i<=999;i++){
		for(j=i;j<=999;j++){
			sprintf(number,"%d",i*j);
			if(palindrome(number)==1){
				result=(result>i*j?result:i*j);
			}
		}
	}
	printf("%d\n",result);
	return 0;
}

