// µÚÆßÕÂ2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<math.h>
int x1,x2,x3;
int main()
{
	void xiaoyu(int a,int b,int c);
	void dengyu(int a,int b,int c);
	void dayu(int a,int b,int c);
	int a,b,c,x;
	scanf("%d %d %d",&a,&b,&c);
	  x=b*b-4*a*c;
	  if(x>0){
	  	dayu(a,b,c);
	  	printf("%d %d",x1,x2);
	  }else{
	  	if(x==0){
	  		dengyu(a,b,c);
	  		printf("%d",x3);
		  }else{
		  	xiaoyu(a,b,c);
		  	printf("ÎÞ½â");
		  }	  
	  }
	return 0;
}
void dayu(int a,int b,int c){
	int y1,y2;
	y1=b*b-4*a*c;
	y2=sqrt(y1);
	x1=(-b+y2)/2*a;
	x2=(-b-y2)/2*a;		
}

void dengyu(int a,int b,int c){
	int result;
	int y1,y2;
	y1=b*b-4*a*c;
	y2=sqrt(y1);
	x3=-b/2*a;
}
void xiaoyu(int a,int b,int c){
	
}