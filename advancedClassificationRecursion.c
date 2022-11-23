#include <stdio.h>
#include "NumClass.h"
#include <math.h>

int isArmstrong(int n)
{
	int length = lengthOfNumber(n);
	int sum = sumOfPowOfDigits(n, length);
	if (sum == n){
	return 1;
	}
	return 0;
}

int sumOfPowOfDigits(int number, int length)
{
	if (number == 0){
		return 0;
	}
	int unity= number%10;
	int powOfUnity= pow(unity,length);
	return (sumOfPowOfDigits(number/10, length)+ powOfUnity);
}


/*will return if a number is palindrome-Recursion*/
int isPalindrome(int n){
	if (n == 0){
		return 1;
	}
	int length = lengthOfNumber(n);
	int powOfTen = pow(10, length-1);
	int firstDigit = n/powOfTen;
	int lastDigit = n%10;
	/*remove the first digit of n*/
	n %= 10;
	/*remuve the last digit of n*/
	n /= 10;
	return (firstDigit == lastDigit) && isPalindrome(n);
}



/*return the length of an integer number*/
int lengthOfNumber (int number){
	int length =0;
	while(number!=0)
	{
		length++;
		number /= 10;
	}
	return length;
}