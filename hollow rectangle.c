#include<stdio.h>
int main(){
    int i,j,r,c;
    printf("Enter the ROWS and COLUMNS   ^;^ ");
    scanf("%d%d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            if(j==1 || j==c || i==1 || i==r)//goooood boyy >_< :)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}