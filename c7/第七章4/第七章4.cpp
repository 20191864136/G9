// ������4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
int main()
{
	int a[3][3];
	int b[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	b[0][0]=a[0][0];
	b[1][1]=a[1][1];
	b[2][2]=a[2][2];
	b[2][2]=a[2][2];
	b[0][1]=a[1][2];
	b[0][2]=a[2][0];
	b[2][0]=a[0][2];
	b[1][0]=a[0][1];
	b[0][1]=a[1][0];
	b[2][1]=a[1][2];
	b[1][2]=a[2][1];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",b[i][j]);
			
		}
		 printf("\n");
	}
	return 0;
}
