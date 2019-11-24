// ตฺม๙ีย10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
int main(){
	int i,j,u,l,digit,s,o;
	char text[3][80];
	u=l=digit=s=o=0;
	for(i=0;i<3;i++)
	{
		printf("please input line %d:\n",i+1);
		scanf("%s",text[i]);
		for(j=0;(j<80)&&(text[i][j]!='\0');j++)
		{
			if(text[i][j]>='A'&&text[i][j]<='Z')
			u++;
			else if(text[i][j]>='a'&&text[j][j]<='z')
			l++;
			else if(text[i][j]>='0'&&text[i][j]<='9')
			digit++;
			else if(text[i][j]=' ')
			s++;
			else
			o++;		
		}
		}
		printf("%d %d %d %d %d",u,l,digit,s,o);
	return 0;
}
