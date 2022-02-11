/*
 * @Author: your name
 * @Date: 2022-02-11 17:31:58
 * @LastEditTime: 2022-02-11 17:35:49
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Chapter01\exercise1-7.c
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int year;
    scanf("%d", &year);

    if ((year % 400) == 0 || (year % 4 == 0 && year % 100 != 0)) printf("yes\n");
    else printf("no\n");

    system("pause");
    return 0;
}