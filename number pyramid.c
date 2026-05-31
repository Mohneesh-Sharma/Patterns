#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter number of lines :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=1;
        for(k=1;k<=n-i;k++) printf(" ");
        for(j=1;j<=2*i-1;j++) {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}