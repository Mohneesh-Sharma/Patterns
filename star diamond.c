#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter number of lines :");
    scanf("%d",&n);
    int a=n/2+1;
    for(i=1;i<=a;i++){
        for(j=1;j<=a-i;j++) printf(" ");
        for(k=1;k<=2*i-1;k++) printf("*");
        printf("\n");
    }
    for(i=1;i<=a;i++){
        for(k=1;k<=i;k++) printf(" ");
        for(j=1;j<=(n)-2*i;j++) printf("*");
        printf("\n");
    }
    return 0;
}