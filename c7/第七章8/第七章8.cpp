// µÚÆßÕÂ8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void Dep(int a){

	int b[100];
	int i=0,cnt=0;
	while(a!=0){
	b[i]=a%10;
	i++;
	cnt++;
	a=a/10;
		}
for(i=cnt-1;i>=0;i--){
		printf("%d ",b[i]);
	}
	}	

int main()
{
	int n;
	scanf("%d",&n);
	Dep(n);		
	return 0;
}

