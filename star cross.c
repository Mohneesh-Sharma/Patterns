#include<stdio.h>
int main(){
    int i,j,n;//n always odd
    printf("Enter the limit ^;^ ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i+j==n+1 || i==j)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*or-- matrix logic
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j==n-1 || i==j)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }*/