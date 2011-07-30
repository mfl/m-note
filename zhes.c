#include <stdio.h>
#define N   10
int main(void)
{ 
  char array[N];
  char *ptr;
  int i=0;

  ptr=array;
  for(i=0; i<N;i++,ptr++)
  {
    *ptr = i+'a';
 }
  for(i=0;i<N;i++) 
  {
   printf("%5c",array[i]);
   
   }
    
    printf("\n");
   return 0;

}
