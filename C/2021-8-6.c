
#include<stdio.h>
#include<assert.h>


char my_stract(char *arr1, const char *arr2)
{
    char* ret=arr1;
    assert(arr1);
    assert(arr2);
    while(*arr1!='\0')
    {
        arr1++;
    }
    while(*arr1++=*arr2++)
    {
        ;
    }
    return ret;
}
int main()
{
    char arr1[30] = {"hello"};
    char arr2[30] = {"bit"};
    my_stract(arr1, arr2);
    printf("%s ",arr1);
    return 0;
}
