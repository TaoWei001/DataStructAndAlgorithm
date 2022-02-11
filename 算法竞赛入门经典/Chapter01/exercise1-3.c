/*
 * @Author: TaoWei001
 * @Date: 2022-02-11 16:41:13
 * @LastEditTime: 2022-02-11 17:02:10
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Chapter01\exercise1-3.c
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, sum;
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("%d\n", sum);
    system("pause");
    return 0;
}

/*
提示：该写法直接用公式计算，但是未考虑到整数超出范围的情况
*/