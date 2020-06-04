#include<stdio.h> 
#include<stdlib.h> 

int main () 
{
/*
Dynamic memort have a great advantage : 
    1- allocating at run time 
    2- unfixed Storage size 

we have a four main function 
malloc() >> a single element of memory 
calloc() >> a multiply block of memory 
realloc() >> change the size of the block 
free()  >> free the block  

*/ 

//malloc() 

/*
 * void *ptr (cast_type * ) malloch (byte_size) ;  
 * 
 * return null of memry not sufficient 
 */ 
 
 /*
  * static int *ptr = (int*)malloc(4) ; 
  * give  a compilation error 
  * the same is with global 
  * as all static variable should be initailized 
  * and the value of ptr initailized in the run time 
  * to solve this we will seperate the tow line 
  * 
  * static int *ptr ; 
  * ptr=(int*)malloc(size) ; 
  * in this line we just make an assignment the the ptr value 
  * 
  * /
 
/*
*using realloc(ptr,size) ; 
*if size is equal to zero it will free the allocation memory 

*/

/*
memoey leak happen when you   you allocat a memory but you dont free it 
you lose the address of your alocating data 
like you creat a memory in a function you lose the address as the memory addressed poped out  
if memory is not sufficent 
>> you should not make any operation to the pointer that hold the  head address of the memory 
*/ 
/* 
you have a free part next to a allocating part in continous 
Free>>allocating>>free>>>allocating 
the soluation is with every m/re alloc we will use a free after it directly 
heap manger will help is  this situation by compacting all the allocating memory be side 
*/
/*

it is more preferable to pass the structure by reference 
*/ 
/*

bit field cant be used with pointer or array 

*/









    return 0 ; 
} 