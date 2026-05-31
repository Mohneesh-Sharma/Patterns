#include<stdio.h>
int main(){
    int r,c,i,j,n;
    printf("enter rows , columns : ");
    scanf("%d%d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            printf("*");
        }
        printf("\n");
        //upar jake bot par jakar in confige inline ko ready disable se enable kr dena
    }
    return 0;

}