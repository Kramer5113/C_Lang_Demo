#include <stdio.h>

int my_order()
{
    // 利用联合体来实现对大端小端的判断
    union Un
    {
        char b;
        int c;
    } u;
    u.c = 1;
    return u.b;
}

int main()
{
    int ret = my_order();
    if (1 == ret)
        printf("small end\n");
    else
        printf("big end\n");
    return 0;
}