/*
 * @Author: your name
 * @Date: 2022-02-11 17:16:24
 * @LastEditTime: 2022-02-11 17:30:31
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Chapter01\exercise1-6.c
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if ((a+b > c) || (a+c > b) || (b+c > b)) {
        if (a*a + b*b == c*c) printf("yes\n");
        else if (a*a + c*c == b*b) printf("yes\n");
        else if (b*b + c*c == a*a) printf("yes\n");
        else printf("no\n");
    }
    else printf("not a triangle\n");;
    system("pause");
    return 0;
}