// ������2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<math.h>
int main()
{
    int cnt1=0;
    int cnt2=0;
    int sign=1;
    double pi=0.0,n=1.0,term=1.0;

    while(fabs(term)>=1e-8)
    {
    pi=pi+term;
    n=n+2;
    sign=-sign;
    term=sign/n;
    cnt1++;
    }
    pi=0.0,n=1.0,term=1.0;
    while(fabs(term)>=1e-6)
    {
    pi=pi+term;
    n=n+2;
    sign=-sign;
    term=sign/n;
    cnt2++;

    }

    pi=pi*4;
    printf("pi=%10.8f\n",pi);
    printf("%d\n",cnt1);
    printf("%d\n",cnt2);

    return 0;



}


