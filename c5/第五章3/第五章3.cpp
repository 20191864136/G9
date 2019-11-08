// 第五章3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
int main(int argc, char* argv[])
{
    int i,j,t,m,n,x,y;
    scanf("%d %d",&m,&n);
    if(m!=0&&n!=0)
    if(m<n){
    t=m;
    m=n;
    n=t;
}
    for(i=1;i<=n;i++){
        if(m%i==0){
            if(n%i==0){
                x=i;
            }
        }
    }
    if((m*n)%2!=0){
        y=m*n;
    }else{if(m%2!=0||n%2!=0){

        y=m*n;
    }else{
    y=2;
            }
        }

printf("最大公约数为%d\n",x);
printf("最小公倍数为%d\n",y);
    return 0;
}

