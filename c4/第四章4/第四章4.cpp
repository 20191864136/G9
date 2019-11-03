// ╣зкдуб4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>

int main(int argc, char* argv[])
{
	int a,b,c,x;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
	x=a;
	}else{x=b;}
	if(x<c){
	x=c;}
	printf("%d\n",x);
	return 0;
}

