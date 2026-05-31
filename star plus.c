#include<stdio.h>
int main(){
    int i,j,n;//n always odd
    printf("Enter the limit ^;^ ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==(n/2)+1 || i==(n/2)+1)//goooood boyy >_< :)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}