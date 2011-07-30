#include <stdio.h>
#define  N  30
int main(void)
{
   char str[N]="hello world!";
   char *ptr ;
   ptr =str;

  while(*ptr !='\0')
{
   printf ("%c",*ptr);
   ptr++;
}
printf("\n");
  
  ptr--;
  while (ptr>= str)
  {
    printf("%c", *ptr);
    ptr--;
  
  }
 printf("\n");

return 0;


}
