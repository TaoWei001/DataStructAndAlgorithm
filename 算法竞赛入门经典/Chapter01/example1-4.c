/*
 * @Author: your name
 * @Date: 2022-02-09 20:29:16
 * @LastEditTime: 2022-02-11 10:17:54
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Chapter01\example1-4.c
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a+b);
    system("pause");
    return 0;
}

/*
提示1-3scanf中的占位符和变量的数据类型应一一对应，且每个变量前需要加“&”符号。
*/