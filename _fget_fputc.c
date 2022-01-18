#include <stdio.h>
int main()
{
   FILE *ptr;
   ptr=fopen("getc.txt","r");
   char c=fgetc(ptr);
   printf("the value of my charcter is %c",c);
    return 0;
}