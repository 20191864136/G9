// µÚÎåÕÂ5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
int main(int argc, char* argv[])
{
	float j=0;
	float n,i,a;
	float x=0.1;
	float sum=0;
	scanf("%f %f",&a,&n);
	for(i=1;i<=n;i++){
		x=x*10;
		
		j=j+n*x;
		
		sum=sum+j;
	}
	printf("%.f\n",sum);
	
	
	
	
	
	return 0;
}