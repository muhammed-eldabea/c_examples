#include <stdio.h> 



int main () 
{

const int x = 10 ; //creat a constant pointer 
// we can make no chane to this data as it defined as a constant one 
// to solve this we will assign the data to a normal pointer with a non constant type 

int * ptr ; 
ptr=&x ; 
*ptr = 20 ; 

/*

int * ptr =&x ; 
*ptr = 20 ; 
this code will not run although it has the same operation like the above one 
i think that the error is that we ant make any direct assign to a constant storage 
in the second line it cast this addresse to a ptr type 

*/
printf("%d",x) ; 

return 0 ; 

}