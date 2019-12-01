// 第七章3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<math.h>
int main()
{
	int isPrime(int n);
	int n;
	scanf("%d",&n);
	isPrime(n);
	if(isPrime(n)==1){
		printf("是素数");
	}else{
		printf("不是素数");
	}
	return 0;
}

int isPrime(int n){
	int i,x=1;
	for(i=2;i<=sqrt(n);i++){
				if(n%i==0){
					x=0;
					break;
				}
		}
	return x;	
}