#include <stdio.h>
#include "NumClass.h"

int main(){
    int numberOne, numbertwo;
    scanf("%d %d", &numberOne, &numbertwo);

    printf("The Armstrong numbers are:");
    for (int i = numberOne; i <= numbertwo; i++){
		if(isArmstrong(i)){
			printf(" %d", i);
		}
	}
    
    printf("\nThe Palindromes are:");
    for (int i = numberOne; i <= numbertwo; i++){
        if(isPalindrome(i)){
			printf(" %d", i);
		}
	}

    
    printf("\nThe Prime numbers are:");
    for (int i = numberOne; i <= numbertwo; i++){
        if(isPrime(i)){
			printf(" %d", i);
		}
	}
     
    printf("\nThe Strong numbers are:");
    for (int i = numberOne; i <= numbertwo; i++){
		if(isStrong(i)){
			printf(" %d", i);
		}
	}

    printf("\n");
	
    return 0;
}