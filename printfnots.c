#include<stdio.h> 

int main () 
{

char str[] = "Muhammed" ; 
/*
printf("hello  ") ; 
printf(" , How are you today",printf("%s",str)) ; 


the output is : hello  Muhammed , How are you today 

as printf("%s",str) executed befor the sentence How are you to day 
*/

printf("hello  ") ; 
printf(" , How are you today the size of your name is %d  ",printf("%s",str)) ; 
/*as we know printf if return the charater that printed to the screen */ 

printf("\n") ; 
puts(str) ; /*used to display a string with no need to idintifire */ 
/*scanf() : It returns total number of Inputs Scanned successfully, */ 



return 0 ; 

}