// #include <stdio.h>
// #include <math.h>
// #include "NumClass.h"


// int isArmstrong(int n)
// {
// 	int number=n, count=0, sum=0;
// 	/*Check the length of number1*/
// 	while(number> 0)
// 	{
// 		count++;
// 		number /= 10;
// 	}
// 	number=n;
// 	/*Calculate the sum of the pow*/
// 	while(number>0)
// 	{
// 		int unity=number%10;
// 		int anspow=pow(unity,count);
// 		sum += anspow;
// 	}
// 	if(n==sum)
// 	{
// 		return 1;
// 	}
// 	return 0;
// }



// /*will return if a number is palindrome*/
// int isPalindrome(int n){
// 	int number=n, reverseNumber=0;

// 	/*Calculate the reverse of number*/
// 	while(number>0){
// 		int Unity=number%10;
// 		reverseNumber=(reverseNumber*10)+Unity;
// 		number=number/10;
// 	}

// 	if(reverseNumber==n){
// 		return 1;
// 	}
// 		return 0;
// }

#include <math.h>

int isArmstrong(int num){
    int sum = 0;
    int count = 0;
    for (int i = num; i > 0; i = i / 10)
        count++;
    for (int i = num; i > 0; i = i / 10)
        sum += (int)(pow((i % 10), count));
    return (sum == num ? 1 : 0);
}

int isPalindrome(int num){
    int sum = 0;
    for (int i = num; i > 0; i = i / 10)
    {
        sum *= 10;
        sum += (i % 10);
    }
    return (sum == num ? 1 : 0);
}