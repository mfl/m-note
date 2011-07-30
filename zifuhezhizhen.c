#include <stdio.h>
#include <string.h>
#define N  30
char *strcpy(char *d,char *s)
{
  while(*s!='\0')
  {
   *d=*s;
   d++;
   s++;
  }
 *d ='\0';
 return d;
}

int main(void)
{
  char str[N]="hello world!";
  char str1[N];

  strcpy(str1,str);

 printf("%s\n",str1);
 return 0;

}

