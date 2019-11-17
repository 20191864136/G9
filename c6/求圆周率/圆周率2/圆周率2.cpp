// Ô²ÖÜÂÊ2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double m,n,sum,x,P;
	int i;
	m=3;
	for(i=1;i<1000000;i++){
		if(i%2==0){
			x=1/m;
		}else{
			x=(-1/m);
			}
		m+=2;
		sum=sum+x;
		}
		P=sum*4+4;
	printf("%lf\n",P);
	return 0;
}

