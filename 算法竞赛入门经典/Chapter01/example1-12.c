/*
 * @Author: your name
 * @Date: 2022-02-11 12:12:12
 * @LastEditTime: 2022-02-11 12:15:20
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Chapter01\example1-12.c
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a < b && b < c) {printf("%d %d %d\n", a, b, c);}
    if (a < c && c < b) {printf("%d %d %d\n", a, c, b);}
    if (b < a && a < c) {printf("%d %d %d\n", b, a, c);}
    if (b < c && c < a) {printf("%d %d %d\n", b, c, a);}
    if (c < a && a < b) {printf("%d %d %d\n", c, a, b);}
    if (c < b && b < a) {printf("%d %d %d\n", c, b, a);}
    system("pause");
    return 0;
}