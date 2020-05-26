#include<stdio.h> 

void checkifprime(unsigned char number ) ; 
int main() 
{

checkifprime(2) ; 

return 0 ; 


} 


void checkifprime(unsigned char number ) 
{
      

    

    for (int i =3 ; i<number ; i++) 
    {
        if ((number%i)==0) 
        {
             printf("number is not prime ") ;  
             return ; 

        }



    }



    
        printf("you have a prime one ") ; 
    



}