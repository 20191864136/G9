// 第六章7.cpp : Defines the entry point for the console application.
//


#include<stdio.h>//魔方阵的阶数应是阶数 
int main(){
	int a[16][16],i,j,k,p,n;
	p=0;
	while(p=0){
		printf("enter n(n==1--15)");
		scanf("%d",&n);
		if((n>=0)&&(n<=15)&&(n%2!=0)){
			p=1;}
			else {printf("input again");
			}
	}
	for(i=1;i<=n;i++){for(j=1;j<=n;j++)
		a[i][j]=0;
		j=n/2+1;
		a[1][j]=1;
		for(k=2;k<=n*n;k++){
			i=i-1;
			j=j+1;
			if((i<1)&&(j>n)){
				i=i+2;
				j=j-1;
			}
		else{
			if(i<1) i=n;
			if(j>n) j=1;
		}
		if(a[i][j]==0)
		a[i][j]=k;
		else
		{
			i=i+2;
			j=j-1;
			a[i][j]=k;
		}
	}
		
		
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++)
			printf("%5d",a[i][j]);
			printf("\n");
		}
	return 0;
}