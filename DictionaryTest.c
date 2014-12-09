//Gio Lapid
//CMPS12B
//8/8/13
//PA5
//-----------------------------------------------------------------------------
// DictionaryTest.c
// Test client for Dictionary ADT
//-----------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>
#include"Dictionary.h"

int main(int argc, char* argv[]){
   Dictionary A = newDictionary();
 
   printf("empty = %d\n", isEmpty(A));
   printf("size = %d\n", size(A)); 
   insert(A, "hi", "there");
    insert(A, "hello", "there");
	insert(A, "r", "there");
	printDictionary(stdout, A);
	 //insert(A, "hi", "there");
	 delete(A, "hello");
   printDictionary(stdout, A);
     printf("empty = %d\n", isEmpty(A));
   printf("size = %d\n", size(A)); 
   
   makeEmpty(A);
     printDictionary(stdout, A);
     printf("empty = %d\n", isEmpty(A));
   printf("size = %d\n", size(A)); 
freeDictionary(&A);
  
   return(EXIT_SUCCESS);
}

