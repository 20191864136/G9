// µÚÎåÕÂ8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b,m,n,x,y,z;
	int i;
	
	m=100,n=999;
	
	    if(100<=m<=999&&100<=n<=999&&m<=n){
	    	i=0;
	    	int count=0;
		    for(m;m<=n;m++){
		    	
			x=m%10;
			y=(m/10)%10;
			z=m/100;
			a=x+10*y+100*z;
			if(x*x*x+y*y*y+z*z*z==a){
				
				if(count!=0){
					printf(" ");	
				}
				count++;
				
				printf("%d",a);
				
				i=1;
			}		
		  }
		if(i==0){
			printf("no");
		}
		printf("\n");
	}


return 0;
}