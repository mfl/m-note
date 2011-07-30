#include <stdio.h>
int main(void)
{
  int i=0;
  int array[100] = {0};
  do
  { 
       array[i]= i+1;
       printf("%4d",array[i]);
       i++;
  }
   while (i<100);
  printf("\n");

  return 0;
}
