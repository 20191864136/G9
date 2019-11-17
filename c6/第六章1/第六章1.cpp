// ตฺม๙ีย1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int main()
{
	int x,i;
	int y=0;
	for(x=2;x<=100;x++){
	y=0; 
	
	
	for(i=2;i<x;i++){
		if(x%i==0){
			y=1;
			break; 
		}
		
	}
	if(y==0){
		printf("%d ",x); 
	}
	
	
	} 
	printf("\n");
	return 0;
 } 