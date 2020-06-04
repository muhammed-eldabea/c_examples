#include<stdio.h> 
#include<stdlib.h>  

/*************************************************************************************
 * a programe to print the sum of element using dynamic memory allocation  
 * 
 * ***********************************************************************************/ 


int main () 
{

int number_of_element = 0  ; 
printf("Enter the number of element >> \n") ; 
scanf("%d",&number_of_element) ; 
int * ptr = (int*)malloc(number_of_element*sizeof(int)) ; 

if(ptr == NULL) 
{
 
 printf("WE donnt have a sufficent memory for you ") ; 
    exit(0) ; 
} 


for (int i = 0 ; i<number_of_element ; i++) 
{
    printf("Enter the element number {%d} >> \t ",i) ; 
    scanf("%d",ptr+i) ;  
}

int sum = 0 ; 
for (int i = 0 ; i<number_of_element ; i++) 
{
   sum += *(ptr+i) ;   
} 

printf(  "the sum of your data is  >> %d" , sum  ) ; 

return 0 ; 

} 