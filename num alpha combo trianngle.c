#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter number of lines :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=65;//or char a=65; both same o\p
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("%c ",a);
                a++;
            }
            else
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
/*or
    for(i=1;i<=n;i++){
        int a=65;//or char a=65; both same o\p
        if(i%2==0){
            for(j=1;j<=i;j++){
                printf("%c ",a);
                a++;
            }
        }
        else{
           for(j=1;j<=i;j++)
            printf("%d ",j);
        }
        printf("\n");
    }*/
