#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
// strlen函数的自定义实现
int my_strlen(const char *p1, const char *p2)
{
    assert(p1 && p2);
    while (*p1 == *p2)
    {
        if (*p1 == '\0')
        {
            return 0;
        }
        p1++;
        p2++;
    }
    if (*p1 > *p2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char *p1 = "bbds";
    char *p2 = "adfe";
    int ret = my_strlen(p1, p2);
    printf("%d\n", ret);
    return 0;
}

