#include<stdio.h>
int main()
{
    int a[9],i,j,k,t,l,m,n;
    for(j=0;j<10;j++){
    scanf("%d",&a[j]);
    }
    for(k=0;k<9;k++){

        for(i=0;i<=9-k;i++){
            if(a[i]>a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;

            }
        }
    }for(i=0;i<10;i++){
        if(a[i]%2!=0){
            printf("%d ",a[i]);
			a[i]=0;
            
        }
    }
      for(i=0;i<10;i++){
        if(a[i]!=0){
            printf("%d ",a[i]);
            
        }
      }
	  
    return 0;
}
