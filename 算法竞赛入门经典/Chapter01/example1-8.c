/*
 * @Author: your name
 * @Date: 2022-02-11 12:03:09
 * @LastEditTime: 2022-02-11 12:03:19
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Chapter01\example1-8.c
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a, b, t;
    scanf("%d %d", &a, &b);
    t = a;
    a = b;
    b = t;
    printf("%d %d\n", a, b);
    system("pause");
    return 0;
}