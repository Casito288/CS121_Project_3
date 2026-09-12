#include <stdio.h>

void printAge(int *pAge){

  printf("you are %d years old\n", *pAge);

}

int main(){

  // pointer = a "variable-like" reference that holds a memory address to another variable,
  // array etc. Some tasks are performed more easisly with pointers
  // * = indirection operator (value at address)

  
  int age = 21;
  int *pAge = NULL;
  pAge = &age;
  /*
  printf("address of age: %p\n", &age);
  printf("value of pAge: %p\n", pAge);

  printf("size of age: %d bytes\n", sizeof(age));
  printf("size of pAge: %d bytes\n", sizeof(pAge));

  printf("value of age: %d\n", age);
  printf("value of stored address: %d\n", *pAge); // dereferencing
  */

  printAge(pAge);
  
  return 0;

}
