/*
 * @Author: your name
 * @Date: 2022-02-11 11:58:57
 * @LastEditTime: 2022-02-11 11:59:59
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Chapter01\example1-7.c
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    m = (n%10)*100 + (n/10%10)*10 + (n/100);
    printf("%03d\n", m);
    system("pause");
    return 0;
}
