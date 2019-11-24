// µÚÆßÕÂ7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void yuanyin(char a[20],char b[20])
{
	int i,j=0;
	for(i=0;i<20;i++){
	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
		b[j]=a[i];
		j++;
		}		
	}
}
	
int main()
{
	char a[20];
	char b[20];
	scanf("%s",a);
	yuanyin(a,b);
	printf("%s",b);
	return 0;
}