/*
 * @Author: your name
 * @Date: 2022-02-11 17:36:28
 * @LastEditTime: 2022-02-11 17:47:56
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Chapter01\exercise1-8.c
 */
#include<stdio.h>
#include<stdlib.h>
#include<float.h>

int main()
{
    printf("%d %d\n", INT_MAX, INT_MIN);

    double n = 3.0;
    printf("%.20lf\n", 1/n);

    printf("%.f %.f\n", DBL_MAX/1, DBL_MIN/1);

    printf("%d \n", 0&&1||0);

    /* else 永远只和它之前的if匹配*/
    int x=0, y=0;
    if (0)if (1)x++;
    else y++;
    printf("%d %d\n", x, y);


    system("pause");
    return 0;
}