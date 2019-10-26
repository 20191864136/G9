// zuoye1026.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <time.h>
#include <stdio.h>
#include <math.h> 
int	is_prime(int n);
int main()
{
	int	n, m;
	int	total = 2;
	long t0, t1;
	m =1000000;
	t0 = clock();
	for(n=3;n<=m;n+=2) 
	{	
		if (0)
			printf("%d%%\r", n*100/m);
		if ( is_prime(n) ) {
			total ++;
			//printf("\n%-4d %d", n,total);
		}
	}
	t1 = clock();
	printf("\nTotal prime numbers between 2 and %d: %d\nTime used: %10.5f seconds\n", m, total, (t1 - t0)/(float)CLOCKS_PER_SEC);
	return 0;

}
int		is_prime(int n)
{
	int		i;
	int		flag;
	if(n%6!=1&&n%6!=5)	
		return 0;
	for(i=5;i<=(sqrt(n));i+=6)
	if(n%i==0||n%(i+2)==0)	
		return 0;
	return 1;
}

