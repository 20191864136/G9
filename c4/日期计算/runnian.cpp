#include "stdafx.h"
int main()
{
	int n=0;
	int y,m,d,i,j;
	int x=0;
	int a[1000]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	printf("������2019 12 31\n");
	printf("�밴������ʽ�ֱ����������գ�\n");

	scanf("%d %d %d",&y,&m,&d);
	if(m==1){
	printf("�������Ǳ���ĵ�%d��",d);
	}
	if(m>=2){
            
	if(y%4==0&&y%100!=0||y%400==0){
		a[2]=29;
		for(j=1;j<m;j++){
            x=x+a[j];
            }
		}else{
		for(i=1;i<m;i++){
                a[2]=28;
            x=x+a[i];
            }
		}
		 printf("�������Ǳ���ĵ�%d��\n",x+d);
	}
	return 0;
}