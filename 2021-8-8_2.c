
#include <stdio.h>
#include <assert.h>
// strlen函数的自定义实现
char *my_strstr(const char *p1, const char *p2)
{
    assert(p1 != NULL);
    assert(p1 != NULL);
    char *s1 = NULL;
    char *s2 = NULL;
    char *start = (char *)p1;
    while (*start)
    {
        s1 = start;
        s2 = (char *)p2;
        while (*s1 && *s2 && !(*s1 - *s2))
        {
            s1++;
            s2++;
        }
        if (*s1 == '\0')
        {
            return NULL;
        }
        if (*s2 == '\0')
        {
            return start;
        }
        start++;
    }
    return NULL;
}

int main()
{
    char *p1 = "daacd";
    char *p2 = "ab";
    char *ret = my_strstr(p1, p2);
    if (ret == NULL)
    {
        printf("找不到\n");
    }
    else
        printf("%s", ret);
    return 0;
}
