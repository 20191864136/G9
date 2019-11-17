// ตฺศýีย1.cpp : Defines the entry point for the console application.
//
#include<stdio.h>

int main()
{
	double r=0.07;
	double n=10.00;
	double i=1;
	double p=1.00;
	while(i<=n){
		p*=(1+r);
		i++;
}
printf("%lf",p);

return 0;

