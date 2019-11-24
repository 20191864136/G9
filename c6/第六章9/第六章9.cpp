// ตฺม๙ีย9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#define N 15
int main(){
	int i,num,top,bot,mid,a[N],flag,loca=-1,sign;//flag is a switch,its function is to ask gun to look for again or not
	char c;
	flag=1;
	printf("enter data\n");
	scanf("%d",&a[0]);
	i=1;
	while(i<N)
	{
		scanf("%d",&a[i]);
		if(a[i]>=a[i-1]){
			i++;
		}
		else
		printf("enter this data again:\n");
	}
	printf("\n");
	for(i=0;i<N;i++)
	printf("%5d",a[i]);
	printf("\n");
	while(flag){
		printf("input number to look for:");
		scanf("%d",&num);
		sign=0;/t found;
		top=0;
		bot=N-1;
		if((num<a[0])||(num>a[N-1]))
		loca=0;
		while((!sign)&&(top<=bot)){
			mid=(top+bot)/2;
			if(num==a[mid]){
			loca=mid;
			printf("has fodund %d,its position is %d\n",num,loca+1);
			sign=1;
			}
			else if(num<a[mid])
			bot=mid-1;
			else
			top=mid+1;
		}
		if((!sign)||(loca=0)){
			printf("not find %d\n",num);
		printf("continue or not(Y/N)?\n");
		scanf("%c",&c);
		if(c=='N'||c=='n'){
			flag=0;
		}	
		}
		else flag=0;		
	}
	return 0;
}
