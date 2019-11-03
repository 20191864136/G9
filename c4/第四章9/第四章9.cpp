// 第四章9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>

int main(int argc, char* argv[])
{
	int i,x,y,j,k,a[5];
	int l=0;
	int m=0;
	int cnt=0;

	scanf("%d",&x);
	y=x;
	if(x<99999){
			for(i=0;i<6;i++){
			
			y=y/10;
			cnt++;
			if(y==0)
				break;
			}

		}
	printf("这是一个%d位数\n",cnt);
		
	
	for(j=0;j<cnt;j++){
		a[l]=x%10;
		k=x%10;
		x=x/10;
		l++;
		printf("%d",k);
		
		}
	printf("\n");
	
	for(m=cnt-1;m>=0;m--){
		printf("%d ",a[m]);


			}
	

   
	

	return 0;
}

