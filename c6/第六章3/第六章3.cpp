// ตฺม๙ีย3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[3][3];
	int i,j;
	int sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		scanf("%d",&a[i][j]);
			}
		}
	sum=a[0][0]+a[1][1]+a[2][2];
	printf("%d\n",sum);

	return 0;
}

