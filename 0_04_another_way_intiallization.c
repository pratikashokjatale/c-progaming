#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[1];
};
int main()
{
    struct employee e1={35,76.90,"pratik"};
    printf("code is: %d \n",e1.code);
      printf("salary is :%f \n ",e1.salary);
        printf("name is :%s \n",e1.name);
    return 0;
}