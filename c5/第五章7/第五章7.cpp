// µÚÎåÕÂ7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
    int k1,k2,k3,sum1,sum2,sum3,sum;
	k1=k2=k3=1;
    sum1=sum2=sum3=0;
    for(k1=1;k1<=100;k1++) sum1=sum1+k1;

    for(k2=1;k2<=50;k2++) sum2=sum2+k2*k2;

    for(k3=1;k3<=10;k3++) sum3=sum3+(1/k3);

    sum=sum1+sum2+sum3;

    printf("%d\n",sum);
    return 0;
}
