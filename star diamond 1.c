#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter number of lines :");
    scanf("%d",&n);
    int a=n/2;
    int ns=a,ns1=1;
    int nst=1,nst1=n-2;
    for(i=1;i<=n;i++){
        if(i<=a+1){
            for(int k=1;k<=ns;k++) printf(" ");
            for(j=1;j<=nst;j++) printf("*");
        ns--;
        nst+=2;
        }
        else{
            for(int k=1;k<=ns1;k++) printf(" ");
            for(j=nst1;j>=1;j--) printf("*");
            ns1++;
            nst1-=2;
        }
        printf("\n");
    }
    return 0;
}