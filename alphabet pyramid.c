#include<stdio.h>
int main(){
    int k,i,j,n;
    printf("enter number of lines :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        char a=65;
        for(j=1;j<=n-i;j++) printf(" ");
        for(k=1;k<=2*i-1;k++){
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}