
#include <stdio.h>
#include <string.h>
#include <errno.h>

//  strtok 的自定义实现

// int main()
// {
//     char arr[] = "songhao@163.com";
//     char *p = "@.";
//     char bur[1024] = {0};
//     strcpy(bur, arr);
//     char *ret = NULL;
//     for (ret = strtok(bur, p); ret != NULL; ret = strtok(NULL, p))
//     {
//         printf("%s\n", ret);
//     }

// char *ret = strtok(bur, p);
// printf("%s\n", ret);
// ret = strtok(NULL, p);
// printf("%s\n", ret);
// ret = strtok(NULL, p);
// printf("%s\n", ret);
// }


//  strerror 的使用
// int main()
// {
//     FILE *p = fopen("test.txt", "r");
//     if (p == NULL)
//     {
//         printf("%s\n", strerror(errno));
//     }
//     else
//     {
//         printf("success\n");
//     }
//     return 0;
// }


//  memcpy函数的使用
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int arr1[5]={0};
//     memcpy(arr1,arr,4*sizeof(arr[0]));
//     return 0;
// }