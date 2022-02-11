/*
 * @Author: your name
 * @Date: 2022-02-11 12:18:29
 * @LastEditTime: 2022-02-11 12:20:35
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Chapter01\example1-14.c
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);
    if(a > b) {t = a; a = b; b = t;}
    if(a > c) {t = a; a = c; c = t;}
    if(b > c) {t = b; b = c; c = t;}
    printf("%d %d %d\n", a, b, c);
    system("pause");
    return 0;
}