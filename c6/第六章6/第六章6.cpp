// ตฺม๙ีย6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define N 10 
int main(){
	int i,j,a[N][N];
	for(i=0;i<N;i++){
		a[i][i]=1;
		a[i][0]=1;
	}
	for(i=2;i<N;i++)
	for(j=1;j<=i-2;j++){
		a[i][j]=a[i-1][j]+a[i-1][j-1];
	}
	for(i=0;i<N;i++){
		for(j=0;j<i;j++)
		printf("%6d",a[i][j]);
		printf("\n");	
	}
	return 0;
}
