#include <stdio.h>
#include <math.h>
#include "NumClass.h"


int isArmstrong(int n)
{
	int number=n, count=0, sum=0;
	/*Check the length of number1*/
	while(number!=0)
	{
		count++;
		number /= 10;
	}
	number=n;
	/*Calculate the sum of the pow*/
	while(number>0)
	{
		int unity=number%10;
		int anspow=pow(unity,count);
		sum += anspow;
	}
	if(n==sum)
	{
		return 1;
	}
	return 0;
}



/*will return if a number is palindrome*/
int isPalindrome(int n){
	int number=n, reverseNumber=0;

	/*Calculate the reverse of number*/
	while(number>0){
		int Unity=number%10;
		reverseNumber=(reverseNumber*10)+Unity;
		number=number/10;
	}

	if(reverseNumber==n){
		return 1;
	}
		return 0;
}