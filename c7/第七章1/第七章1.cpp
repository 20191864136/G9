// ������1.cpp : Defines the entry point for the console application.
//
	#include "stdafx.h"

	int GYS(int a,int b){//�����Լ�� 
		int x;
		x=a%b;
		if(x==0){
			return b;
		}else{
			GYS(b,x);
		}
	}
	
	int GBS(int a,int b){//��С������ 
		int y;
		y=a*b;
		return y;
	}

int main()
{
	int m,n,a,b;
	int t;
	scanf("%d %d",&m,&n);
	
	if(m<n){
		m=t;
		m=n;
		n=t;
	}
	GYS(m,n);
	a=GYS(m,n);
	GBS(m,n);
	b=GBS(m,n);
	printf("���Լ��Ϊ%d\n",a);
	printf("��С������Ϊ%d\n",b/a);
	return 0;
}

