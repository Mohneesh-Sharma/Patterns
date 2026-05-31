#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter number of lines :");
    scanf("%d",&n);
    int a=1;
    int nsp=1;
    int nst=n-1;
    int nst1=n+1;
    for(i=1;i<=n;i++){
        if(i==1) for(j=1;j<=2*n-1;j++) printf("%d",j);
        else{
            for(j=1;j<=nst;j++) printf("%d",j);
            for(k=1;k<=nsp;k++) printf(" ");
            for(j=nst1;j<=2*n-1;j++) printf("%d",j);
            nsp+=2;
            nst--;
            nst1++;
        }
        printf("\n");
    }
    return 0;
}