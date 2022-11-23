// #include <stdio.h>
// #include "NumClass.h"
// #include <math.h>

// int isArmstrong(int n)
// {
// 	int length = lengthOfNumber(n);
// 	int sum = sumOfPowOfDigits(n, length);
// 	if (sum == n){
// 		return 1;
// 	}
// 	return 0;
// }

// int sumOfPowOfDigits(int number, int length)
// {
// 	if (number == 0){
// 		return 0;
// 	}
// 	int unity= number%10;
// 	int powOfUnity= pow(unity,length);
// 	return (sumOfPowOfDigits(number/10, length)+ powOfUnity);
// }


// /*will return if a number is palindrome-Recursion*/
// int isPalindrome(int n){
// 	int length = lengthOfNumber(n);
// 	return isPalindromeRecursive(n, length-2);
	
// }

// /*will return if a number is palindrome-Recursion*/
// int isPalindromeRecursive(int n, int length){
// 	if (n == 0){
// 		return 1;
// 	}
// 	int powOfTen = pow(10, length-1);
// 	int firstDigit = n/powOfTen;
// 	int lastDigit = n%10;
// 	/*remove the first digit of n*/
// 	n %= powOfTen;
// 	/*remuve the last digit of n*/
// 	n /= 10;
// 	return (firstDigit == lastDigit) && isPalindrome(n, length-2);
// }




// /*return the length of an integer number*/
// int lengthOfNumber (int number){
// 	int length =0;
// 	while(number!=0)
// 	{
// 		length++;
// 		number /= 10;
// 	}
// 	return length;
// }

#include <math.h>

int NumberLength(int num)
{
    int length=0;
    while(num!=0)
    {
        length++;
        num = num/10;
    }
    return length;
}

int isPalindromeReverse(int num , int ReverseNum)
{
    if(NumberLength(num)==0) return ReverseNum;
    ReverseNum=ReverseNum*10+num%10;
    return isPalindromeReverse(num/10, ReverseNum);
}

int isPalindrome(int num)
{   
    int ReverseOriginalNumber=isPalindromeReverse(num,0);

    return(ReverseOriginalNumber==num);
   
}

int isArmstongLength(int num, int length)
{   
    int changeOriginalNumber=num;
    if(changeOriginalNumber==0) return 0;
    return pow(changeOriginalNumber%10,length)+isArmstongLength(changeOriginalNumber/10,length);
}


int isArmstrong(int num)
{
    int sum=isArmstongLength(num,NumberLength(num));

    if(sum==num) return 1;
    else return 0;

}