// ������7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#define Pi 3.14159
int main()
{	
	float c,s1,s2,v1,v2,r,h;
	scanf("%f %f",&r,&h);
	c=2*Pi*r;
	s1=Pi*r*r;
	s2=4*Pi*r*r;
	v1=4/3*Pi*r*r*r;
	v2=Pi*r*r*h;
	printf("Բ�ܳ�Ϊ%.2f,Բ���Ϊ%.2f,Բ������Ϊ%.2f,Բ�����Ϊ%.2f��Բ�����Ϊ%.2f��",c,s1,s2,v1,v2);
	return 0;
}