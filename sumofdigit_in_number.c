#include<stdio.h> 

void SumofDigit(int number) ; 
int main() 
{
SumofDigit(123) ; 

}


void SumofDigit(int number) 
{
int sum = 0 ; 

while(number !=0) 
{

sum+=(number%10) ;  /*add the reminder of the first occerence digit to the sum */
number/=10 ;  /*move the digit to the left */ 



}

printf("the sum of digit is = %d",sum) ; 

}