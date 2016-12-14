/*
 ============================================================================
 Name        : C_Ref_ch02_TypeModifiers_RelationalOperators.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
  int xor(int a, int b);

  int main(void)
  {
    printf("%d\n", xor(1, 0));
    printf("%d\n", xor(1, 1));
    printf("%d\n", xor(0, 1));
    printf("%d\n", xor(0, 0));

    return 0;
  }

  /* Perform a logical XOR operation using the
     two arguments. */
  int xor(int a, int b)
  {
	  puts("in xor");
    return (a || b) && !(a && b);
  }
