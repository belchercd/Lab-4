#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/* IMPLEMENT ME: Declare your functions here */
typedef int (*functionsPointer)(int,int);
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exitOperation ();


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  functionsPointer functions[5];
  functions[0] = add;
  functions[1] = subtract;
  functions[2] = multiply;
  functions[3] = divide;
  functions[4] = exitOperation;
  
  int operator;
  int result;
  bool keepGoing = true;
  int a=6, b=3;
  
  while(keepGoing){
    printf("Operand 'a': %d | Operand 'b': %d\n", a, b);
    printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
    scanf("%d", &operator); //take integer value 
    result = (functions[operator])(a,b); //pass 6 and 3 as a and b value
    printf("x = %d\n", result);
  }
  
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { 
  printf ("Adding 'a' and 'b'\n"); 
  return a + b; 
}
int subtract (int a, int b) { 
  printf ("Subtracting 'b' from 'a'\n"); 
  return a - b; 
}
int multiply (int a, int b) { 
  printf ("Multiplying 'a' and 'b'\n"); 
  return a * b; 
}
int divide (int a, int b) { 
  printf ("Dividing 'a' by 'b'\n"); 
  return a / b; 
}
int exitOperation () { 
  printf ("Exiting Program\n"); 
  exit(0); //end program 
  return 0;
}