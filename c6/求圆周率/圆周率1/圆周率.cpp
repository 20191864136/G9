// Ô²ÖÜÂÊ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double x,y,i,j,sum=0;
	double P=1;

	for(j=2;j<10000;j++){
		x=1;
		y=3;
		
		for(i=0;i<j;i++){
		
		P=P*(x/y);
		x++;
		y+=2;
		
		}
		sum+=P;
		P=0;
	}
	sum=P*2;
		printf("%lf\n",sum);
	return 0;
}

