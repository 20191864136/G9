// Ô²ÖÜÂÊ3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main(int argc, char* argv[])
{
	double n,m=3,sum,P;
	int i,j;
		
	for(i=0;i<10000;i++){
		n=(1/m)*(1/m);
		m+=2;
		sum+=n;

		}
	P=(sum+1)*8;
	printf("%lf",sqrt(P));
	return 0;
}

