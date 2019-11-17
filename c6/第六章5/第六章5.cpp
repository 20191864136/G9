// ตฺม๙ีย5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	
	int i,j,m,n,t;
	int a[3];
	n=3;
	for(i=0;i<=n;i++){
	scanf("%d",&a[i]);
		}

		m=n;
	for(i=0;i<n/2;i++){
		t=a[i];
		a[i]=a[m];
		a[m]=t;
		
		m--;
		}
	for(i=0;i<=n;i++){
		printf("%d ",a[i]);
		}
	return 0;
}

