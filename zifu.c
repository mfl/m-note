#include <stdio.h>
#define  N  30 
int main(void)
{
  char str[N];
  char *ptr;
  int i=0;
  ptr = str;
  for(i=0;i<N-1;i++,ptr++)
  {
    
    *ptr ='a'+i;
  }
  printf("str =%s\n",str);
  return 0;
}
