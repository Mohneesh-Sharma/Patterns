#include<stdio.h>
int main(){
     int i,j,n;
    printf("enter number of lines :");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        int a=65;//or char a=65; both same o\p
        for(j=i;j>=1;j--){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
/*  for(i=1;i<=n;i++){
        int a=65;//or char a=65; both same o\p
        for(j=1;j<=n+1-i;j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }*/