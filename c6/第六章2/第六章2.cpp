// ������2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[9];
	int m,n,t,i,j;
	for(i=0;i<=9;i++){

	scanf("%d",&a[i]);
	}

	for(j=0;j<9;j++){
		for(i=0;i<9-j;i++){
			if(a[i]>a[i+1]){
				t=a[i+1];
				a[i+1]=a[i];
				a[i]=t;
				}
	}
		}
	for(i=0;i<=9;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

