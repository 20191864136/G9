// 第五章4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
int main(int argc, char* argv[])
{
    int word=0;
    int space=0;
    int number=0;
    int other=0;
    char n;
    while((n=getchar())!='\n')
    {
        if(n<='z'&&n>='a'||n>='A'&&n<='Z'){
            word++;
        }else{
        if(n>='1'&&n<='9'){
            number++;
        }else{
        if(n==' '){
            space++;
        }else{
        other++;
                    }
                }
            }
        }
        printf("英文字母的数量为%d\n",word);
        printf("空格的数量为%d\n",space);
        printf("数字的数量为%d\n",number);
        printf("其他字符的数量为%d\n",other);



    return 0;
}
