#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter number of lines : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                if(j%2!=0) printf("0");
                else printf("1");
            }
            else{
                if(j%2!=0) printf("1");
                else printf("0");
            } 
        }
        printf("\n");
    }
    return 0;
}
/*or 
   for(i=1;i<=n;i++){
        if(i%2!=0) 
        a=1;
        else 
        a=0;
        for(j=1;j<=i;j++){
            printf("%d ",a);
            if(a==0) 
            a=1;
            else 
            a=0;
        }
    
    printf("\n");
    }*/