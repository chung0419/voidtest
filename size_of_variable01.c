#include <stdio.h>
#include <stdlib.h>

int main() {

  fprintf(stdout, "x_size_of_variable01 \n");
  fprintf(stdout, "Testing \n");
  fprintf(stdout, "size of int = %d \n", sizeof(int) );
  fprintf(stdout, "size of char = %d \n", sizeof(char) );
  fprintf(stdout, "size of cs01 = %d \n", sizeof(char[100]) );
  fprintf(stdout, "size of float = %d \n", sizeof(float) );
  fprintf(stdout, "size of double = %d \n", sizeof(double) );
  fprintf(stdout, "size of long double = %d \n", sizeof(long double) );

  return 0;
}
