// ตฺม๙ีย4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[10]={11,22,33,44,55,66,77,88,99,111};
	int m,n,i,j,t;
	scanf("%d",&a[10]);
	for(i=0;i<10;i++){
		for(j=0;j<10-i;j++){
			if(a[j]>a[j+1]){
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
				}
			}
		}
	for(i=0;i<=10;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

