#include<stdio.h> 

int main () 
{

int number = 0x84584012 ; 
int mask = 0x8000 ; 
char counter = 0 ; 
char max_counter=0 ; 
for (int i = 0 ; i<32 ; i++) 
{
    if((number<<i) & mask ) 
    { 
        if(counter>=max_counter) 
        {
            max_counter = counter ; 
        } 

        counter= 0 ; 

    } 
    else 
    {
        counter++ ; 
    }






}

printf("%d",max_counter) ; 


} 


