#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("enter number of lines :");
    scanf("%d",&n);
    int nsp=1;
    //int nst=n-1;
    for(i=1;i<=n;i++){
        if(i==1){
            for(j=1;j<=n;j++) printf("%d",j);
            for(k=n-1;k>=1;k--) printf("%d",k);
        }
        else{
            for(j=1;j<=n+1-i;j++) printf("%d",j);
            for(k=1;k<=nsp;k++) printf(" ");
            for(j=n+1-i;j>=1;j--) printf("%d",j);
            nsp+=2;
        }
        
        printf("\n");
    }
    return 0;
}