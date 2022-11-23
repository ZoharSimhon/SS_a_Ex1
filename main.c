#include <stdio.h>
#include "NumClass.h"

int main()
{
	int oneN, twoN;
	scanf("%d" "%d", &oneN, &twoN);

	printf("The Prime numbers are:");
	for(int i=oneN; i<=twoN;i++){
		if(isPrime(i)){
			printf(" %d",i);
		}
	}

	printf("\nThe Armstrong numbers are:");
	for(int i=oneN; i<=twoN;i++){
		if(isArmstrong(i)){
			printf(" %d",i);
		}     
	}

	printf("\nThe Strong numbers are:");
	for(int i=oneN; i<=twoN;i++){
		if(isStrong(i)){
			printf(" %d",i);
		}    
	}

	printf("\nThe Palindrome numbers:");
	for(int i=oneN; i<=twoN;i++){
		if(isPalindrome(i)){
			printf(" %d",i);
		}    
	}
	printf("\n");
	return 0;
}