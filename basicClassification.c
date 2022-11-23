// #include <stdio.h>
// #include <math.h>
// #include "NumClass.h"

// /*will return if a number is prime*/
// int isPrime(int n)
// {
// 	if(n==0)
// 	{
// 		return 0;
// 	}
// 	for(int i=2;i<=sqrt(n);i++)
// 	{
// 		if(n%i==0)
// 		{
// 			 return 0;
// 		}
// 	}
// 	return 1;
// }

// /*Strong number is a special number whose sum of the factorial of digits is equal to the original number.*/
// int isStrong(int n)
// {
// 		int sum=0,number=n; 
// 		while(number!=0)
// 		{
// 			int unity=number%10;
// 			number=number/10;
// 			int fact=factorial(unity);
// 			sum += fact;
// 		}
// 	 if(sum==n)
// 	 {
// 		 return 1;
// 	 }
// 		return 0;
// }

// /*return the factorial of a integer number*/
// int factorial(int n){
// 	 int mult=1;
// 	 for(int i=1;i<=n;i++)
// 	 {
// 			 mult *= i;
// 	 }
// return mult;
// }

#include <math.h>


int isPrime(int num){
    if (num == 0) return 0;
    int square = sqrt(num);
    for (int i = 2; i <= square; i++)
        if(num % i == 0) return 0;
    return 1;
}
int factorial(int num){
    if(num==0) return 1; 
    return num*factorial(num-1);
}
int isStrong(int num){
    if (num == 0) return 0;
    int sum = 0;
    for (int i = num; i > 0; i = i/10)
        sum += factorial(i % 10);
    return (sum == num ? 1 : 0);
}