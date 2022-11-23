// #include <stdio.h>
// #include "NumClass.h"

// int main()
// {
// 	int oneN, twoN;
// 	scanf("%d" "%d", &oneN, &twoN);

// 	printf("The Prime numbers are:");
// 	for(int i=oneN; i<=twoN;i++){
// 		if(isPrime(i)){
// 			printf(" %d",i);
// 		}
// 	}

// 	printf("\nThe Armstrong numbers are:");
// 	for(int i=oneN; i<=twoN;i++){
// 		if(isArmstrong(i)){
// 			printf(" %d",i);
// 		}     
// 	}

// 	printf("\nThe Strong numbers are:");
// 	for(int i=oneN; i<=twoN;i++){
// 		if(isStrong(i)){
// 			printf(" %d",i);
// 		}    
// 	}

// 	printf("\nThe Palindrome numbers:");
// 	for(int i=oneN; i<=twoN;i++){
// 		if(isPalindrome(i)){
// 			printf(" %d",i);
// 		}    
// 	}
// 	printf("\n");
// 	return 0;
// }
#include <stdio.h>
#include "NumClass.h"

int main(){
    int first, last;
    scanf("%d %d", &first, &last);
    printf("The Armstrong numbers are:");
    for (int i = first; i <= last; i++)
        if(isArmstrong(i))
            printf(" %d", i);
    
    printf("\nThe Palindromes are:");
    for (int i = first; i <= last; i++)
        if(isPalindrome(i))
            printf(" %d", i);
    
    printf("\nThe Prime numbers are:");
    for (int i = first; i <= last; i++)
        if(isPrime(i))
            printf(" %d", i);
     
    printf("\nThe Strong numbers are:");
    for (int i = first; i <= last; i++)
        if(isStrong(i))
            printf(" %d", i);
    printf("\n");
    return 0;
}