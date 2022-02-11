/*
 * @Author: your name
 * @Date: 2022-02-11 17:04:39
 * @LastEditTime: 2022-02-11 17:15:26
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Chapter01\exercise1-5.c
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    double money;
    scanf("%d", &n);
    int temp;
    temp = n * 95;
    
    if (temp >= 300) {
        money = (double)n * 95 * 0.85;
    }
    else {
        money = (double)n * 95;
    }

    printf("%.2f\n", money);
    system("pause");
    return 0;
}

/*
提示：打折后的价钱可能不是整数，需要使用double
*/