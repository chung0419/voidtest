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

  fprintf(stdout, "migrate to travis-ci com \n");

  fprintf(stdout, "Happy new year 2021! \n");

  fputc('h', stdout);
  fputc('a', stdout);
  fputc('p', stdout);
  fputc(112, stdout);
  fputc('y', stdout);
  fputc(32, stdout);
  fputc('d', stdout);
  fputc(97, stdout);
  fputc('y', stdout);
  
  //fputc('\n', stdout);
  fputc(10, stdout);

  fprintf(stdout, "Happy new month February 2021! \n");
  fputc('\n', stdout);

  return 0;

}
