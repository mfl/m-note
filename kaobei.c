#include <stdio.h>
　
#include <string.h>
int main(void)
　　
{
　　char string[10];

　　char *str1 = "abcdefghi";

　　stpcpy(string, str1);

　　printf("%s\n", string);

　　return 0;
　　
} 
