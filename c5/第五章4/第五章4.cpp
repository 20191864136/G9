// ������4.cpp : Defines the entry point for the console application.
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
        printf("Ӣ����ĸ������Ϊ%d\n",word);
        printf("�ո������Ϊ%d\n",space);
        printf("���ֵ�����Ϊ%d\n",number);
        printf("�����ַ�������Ϊ%d\n",other);



    return 0;
}
