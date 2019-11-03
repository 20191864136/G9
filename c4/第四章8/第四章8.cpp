// 第四章8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int x;
	printf("请输入你的成绩：");
	scanf("%d",&x);
	if(x>=90){
	printf("A\n");
		}else{
		if(x<90&&x>=80){
			printf("B\n");
		}	else{
			if(x<80&&x>=70){
				printf("C\n");
			}else{
				if(x<70&&x>=60){
					printf("D\n");
				}
					else{
						if(x<60){
							printf("E\n");
							}
						}
					}
				}
			
		
		
		
		
		
		
		
		
			}

	return 0;

}

