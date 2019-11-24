// ตฺม๙ีย8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#define N 4
#define M 5
int main(){
	int i,j,k,a[N][M],t,max,flag;
	printf("please input matrix\n");
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			scanf("%d",&a[i][j]);
		}}
	
	for(i=0;i<N;i++){
		max=a[i][0];
		t=0;
		for(j=1;j<M;j++){
			if(a[i][j]>max){
				max=a[i][j];
				t=j;
			}}
			flag=1;
			for(k=0;k<N;k++){
				if(max>a[k][t]){
					flag=0;
					continue;
				}}
				if(flag){
					printf("a[%d][%d]=%d\n",i,t,max);
					break;
				}
				if(!flag){
					printf("it is not exist!\n");
					
				}
				}
	return 0;
}
