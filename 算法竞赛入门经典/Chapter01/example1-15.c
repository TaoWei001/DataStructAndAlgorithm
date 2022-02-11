/*
 * @Author: your name
 * @Date: 2022-02-11 12:23:52
 * @LastEditTime: 2022-02-11 12:25:48
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Chapter01\example1-15.c
 */
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d \n", a, b);
    return 0;
}

/*
\n是一个特殊字符，叫做“换行符”，其中n是英文单词newline（换行）的首字母。换句话
说，在输出的最后加一个\n会在输出结束后换行。既然“换行”只是一个特殊字符，完全可以
用printf（"1\n2\n"）分两行输出1和2，并且用“printf（"1\n\n2\n"）；”分三行输出1和2，并且
在1和2中间换一行。
*/
