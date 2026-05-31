#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("enter number of lines :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=i-1;k++) printf(" ");
        for(j=1;j<=n+1-i;j++) printf("*");
        printf("\n");
    }
//ANOTHER LOGIC DOWN HERE LET'S SEE:) using nsp,nst
    int nsp=0;
    int nst=n;
    for(i=1;i<=n;i++){
        for(k=1;k<=nsp;k++) printf(" ");
        for(j=1;j<=nst;j++) printf("*");
        printf("\n");
        nsp++;
        nst--;
    }
    return 0;
}