#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter lines :");
    scanf("%d",&n);//key - 1,3.5,7,9.... nth jolast chahiye wo hogi 1+(n-1)*2 i.e. 2n-1=An
    for(i=1;i<=n;i++){
        for(j=1;j<=(2*n-1);j=j+2){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
/*or  for(i=1;i<=n;i++){
        int a=1;
        for(j=1;j<=n;j++){
        printf("%d ",a);
        a=a+2;
        }
        printf("\n");
    }*/