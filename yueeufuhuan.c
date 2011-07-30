#include <stdio.h>  
#define   N  10
int main(void)
{
  char array[N]={0};
  int i=0;
  int interval=4;
  int out_counter=0;
  int sum=0;

  for(i=0; sum< N ;i++)
  {
   if(i==N)
    {
     i=0;

    }
  if (array[i]==0)
  {
    out_counter++;
    if(out_counter==interval)
    {
      out_counter=0;
      array[i]=1;

      printf("%5d(out)\n",i+1); 
      sum++;

    } 
      else 
      {
        printf("%5d",i+1);
       }
      
  }
}
   return 0;
}
