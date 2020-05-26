#include<stdio.h> 

int reverseNumber(int number) ; 
int main () 
{
printf("%d",reverseNumber(4123)) ; 
} 



int reverseNumber(int number) 
{
int reminder,rev_numb=0 ;
while (number != 0 ) 
{
   reminder=number%10 ;   
    rev_numb=(rev_numb*10)+reminder ; 
    number/=10 ; 

}

return rev_numb ; 

}