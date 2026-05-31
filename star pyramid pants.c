#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("enter number of lines :");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    int nst1=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=nst;j++) printf("*");
        nst--;
        if(i==1) {
            for(j=1;j<=nst1;j++) printf("*");
        }
        else{
            for(k=1;k<=nsp;k++) printf(" ");
            nsp+=2;
            for(j=1;j<=nst1;j++) printf("*");
            nst1--;
        }
        printf("\n");
    }
    return 0;
}