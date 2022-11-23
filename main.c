#include <stdio.h>
#include "NumClass.h"

int main()
{
	int numberOne, numberTwo;
	scanf("%d %d", &numberOne, &numberTwo);


	printf("\nThe Armstrong numbers are:");
	for(int i=numberOne; i<=numberTwo;i++){
		if(isArmstrong(i)){
			printf(" %d",i);
		}     
	}


	printf("\nThe Palindrome numbers:");
	for(int i=numberOne; i<=numberTwo;i++){
		if(isPalindrome(i)){
			printf(" %d",i);
		}    
	}

	printf("The Prime numbers are:");
	for(int i=numberOne; i<=numberTwo;i++){
		if(isPrime(i)){
			printf(" %d",i);
		}
	}


	printf("\nThe Strong numbers are:");
	for(int i=numberOne; i<=numberTwo;i++){
		if(isStrong(i)){
			printf(" %d",i);
		}    
	}

	printf("\n");
	return 0;
}
