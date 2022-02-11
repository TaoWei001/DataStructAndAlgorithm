/*
 * @Author: your name
 * @Date: 2022-02-11 11:55:06
 * @LastEditTime: 2022-02-11 11:56:47
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AEnc
 * @FilePath: \Chapter01\example1-6.c
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d%d%d \n", n%10, n/10%10, n/100);
    system("pause");
    return 0;
}