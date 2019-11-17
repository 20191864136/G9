// µÚÎåÕÂ6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
    int n,s=1,sum=0;
    for(n=1;n<=20;n++)
{
    s=s*n;
    sum=sum+s;
}
    printf("%d\n",sum);

    return 0;
}

