#include <stdio.h> 

void numberofones(unsigned char number  ) ; 
int main () 
{

numberofones(0b10101100) ; 



} 


void numberofones(unsigned char number  )  
{

unsigned char counter=0, mask = 0x80 ; 

for (int i = 0 ; i<8 ; i++) 
{
     if ((number<<i) & mask )  
    counter++ ;  
}



printf("%d",counter) ; 
}