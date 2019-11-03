// 第四章5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<math.h>

int main(int argc, char* argv[])
{
	float x;
	
	scanf("%f",&x);
	if(x<1000){		
	printf("%2.0f\n",sqrt(x));
}else{
	printf("请重新输入"); 
}
		
				
	return 0;
}


