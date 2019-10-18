// ตฺศýีย3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<math.h>

int main()
{
	double d,p,r,m;
	d=300000.0;
	p=6000.0;
	rr=0.01;
	m=log10(p/(p-d*r))/log10(1+r);
	printf("%2.1lf",m);
	return 0;
}
