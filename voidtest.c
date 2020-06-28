#include <stdio.h>
#include <stdlib.h>

int main() {

  //int aaa = 'aaa';
  //printf(aaa);

  printf("Void Test! \n");

  int i001 = fprintf(stdout, "Void Test stdout! \n");
  fprintf(stdout, "Number of characters printed is %d \n", i001);

  fprintf(stdout, "Happy new year! \n");

  fprintf(stdout, "Happy new month! \n");

  fprintf(stdout, "Happy new week! \n");

  fprintf(stdout, "Happy new day! \n");

  fprintf(stdout, "Happy new hour! \n");

  return 0;

}
