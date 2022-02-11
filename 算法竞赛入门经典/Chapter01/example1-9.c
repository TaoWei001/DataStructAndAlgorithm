/*
 * @Author: your name
 * @Date: 2022-02-11 12:03:33
 * @LastEditTime: 2022-02-11 12:05:58
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Chapter01\example1-9.c
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d\n", a, b);
    system("pause");
    return 0;
}

/*
提示1-13：交换两个变量的三变量法适用范围广，推荐使用
*/