/*
 * @Author: your name
 * @Date: 2022-02-11 12:08:26
 * @LastEditTime: 2022-02-11 12:10:19
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Chapter01\example1-11.c
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, n, m;
    scanf("%d%d", &n, &m);
    a = (4*n - m)/2;
    b = n - a;
    if (m % 2 == 1 || a < 0 || b < 0) {
        printf("No answer\n");
    }
    else {
        printf("%d %d\n", a, b);
    }
    system("pause");
    return 0;

}