
#include <stdio.h>
#include <assert.h>

//  memcpy函数的自定义实现

// struct S
// {
//     char name[20];
//     int age;
// };

// void* my_memcpy(void* dest,const void* str,size_t num)
// {
// void* start=dest;
// assert(dest!=NULL);
// assert(str!=NULL);
// while(num--)
// {
//    *(char*)dest++=*(char*)str++;
// return start;
// }
// int main()
// {
//     struct S arr1[] = {{"sh", 21}, {"ww", 19}};
//     struct S arr2[3] = {0};
//     my_memcpy(arr2,arr1,sizeof(arr1));
//     return 0;
// }


//  memmove函数的自定义实现

//  const来保持出发地的不变
void *my_memmove(void *dest, const void *src, size_t num)
{
    //利用assert函数来判断输入的值
    assert(dest != NULL);
    assert(src != NULL);
    //后续的运行会改变dest起始位置 所以提前复制一个
    void *ret = dest;
    //利用if来实现更换数字时在不同位置交换顺序不一样的问题
    if (src > dest)
    {
        while (num--)
        {
            *(char *)dest++ = *(char *)src++;
        }
    }
    else
    {
        //传入的都是整型 在强制转换后
        //  03 00 00 00 / 04 00 00 00 / 05 00 00 00
        //所以原来是int4个字节4个字节的交换 在变成char后数量*4 交换也变成了
        //例如 05 00 00 00  因为类型的转换一个整体变成了4个整体 所以现在需要从最后一位00开始交换
        //dest+num-1就是我们需要的地址 根据我们的交换要求 而进入循环时n-- 已经完成-1操作
        //所以直接dest+num即可
        while (num--)
        {
            *((char *)dest + num) = *((char *)src + num);
        }
    }
    return ret;
}

int main()
{
    int i = 0;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    my_memmove(arr1, arr1 + 2, 5 * sizeof(arr1[0]));
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
    return 0;
}