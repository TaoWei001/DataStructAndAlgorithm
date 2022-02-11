/*
 * @Author: your name
 * @Date: 2022-02-11 16:29:04
 * @LastEditTime: 2022-02-11 16:31:26
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Chapter01\exercise.c
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c;
    double avg;
    scanf("%d%d%d", &a, &b, &c);
    avg = (a+b+c)/3.0;
    printf("%.3f\n", avg);
    system("pause");
    return 0;
}