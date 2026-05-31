#include<stdio.h>
int main(){
     int i,j,n;
    printf("enter number of lines :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=65;//or char a=65; both same o\p
        for(j=1;j<=n;j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}