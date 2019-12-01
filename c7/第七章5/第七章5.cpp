// µÚÆßÕÂ5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
int main()
{
	char a[100];
	int i=0,j,x,y;
	char t;
	int cnt=0;
	for(i=0;i<100;i++){
		scanf("%c",&a[i]);
		cnt++;
		if(a[i]=='\n'){
			break;
		}
	}
	
	x=(cnt-1)/2;
	y=cnt-1;
	for(i=0;i<=x;i++){
		t=a[i];
		a[i]=a[y];
		a[y]=t;
		y--;	
	}
	for(i=0;i<=cnt-1;i++){
		printf("%c",a[i]);
		}
	printf("\n");
	
	return 0;
}