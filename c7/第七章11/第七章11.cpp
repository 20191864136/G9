// µÚÆßÕÂ11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void paixu(int a[10]){
	
	int i,j,t;
	for(j=0;j<10;j++){
		for(i=0;i<9-j;i++){
			if(a[i]>a[i+1]){
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	
}

int main()
{
	int n,i,a[10];
	for(i=0;i<10;i++){
	scanf("%d",&a[i]);
}
	paixu(a);
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	 
	return 0;
}

