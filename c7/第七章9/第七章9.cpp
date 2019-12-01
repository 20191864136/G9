// µÚÆßÕÂ9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
main()
{
char a[30];
void fun_char(char a[]);
printf("ÇëÊäÈë×Ö·û´®£º");
gets(a);
fun_char(a);
}
void fun_char(char a[])
{
int i,letter=0,digit=0,space=0,other=0;
for(i=0;a[i]!='\0';i++)
{
if((a[i]<='z'&&a[i]>='a')||(a[i]<='Z'&&a[i]>='A'))
letter++;
else if(a[i]<='9'&&a[i]>='0')
digit++;
else if(a[i]==' ')
space++;
else
other++;
}
printf("letter=%d;\tdigit=%d;\tspace=%d;\tother=%d\n",letter,digit,space,other);
} 