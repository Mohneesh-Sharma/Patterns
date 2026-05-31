#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter number of lines :");
    scanf("%d",&n);
    int nsp=1;
    int nst=n-1;
    int nst1=n+1;
    for(i=1;i<=n;i++){
        char a=65;
        if(i==1) for(j=1;j<=2*n-1;j++) {
            printf("%c",a);
            a++;
        }
        else{
            for(j=1;j<=nst;j++){ 
                printf("%c",a);
                a++;
            }
            for(k=1;k<=nsp;k++){
                printf(" ");
                a++;
            }
            for(j=nst1;j<=2*n-1;j++){
                 printf("%c",a);
                 a++;
            }
            nsp+=2;
            nst--;
            nst1++;
        }

        printf("\n");
    }
    return 0;
}
/*or 
#include<stdio.h>
int main(){
    int i,j,k,n,b;
    printf("enter number of lines :");
    scanf("%d",&n);
    int nsp=1;
    int nst=n-1;
    int nst1=n+1;
    b=1;
    for(i=1;i<=n;i++){
        char a=65;
        if(i==1) for(j=1;j<=2*n-1;j++) {
            printf("%c",a);
            a++;
        }
        else{
            for(j=1;j<=nst;j++){ 
                printf("%c",a);
                a++;
            }
            for(k=1;k<=nsp;k++) printf(" ");
            for(j=nst1;j<=2*n-1;j++){
                 printf("%c",a+b);
                 a++;
            }
            b+=2;
            nsp+=2;
            nst--;
            nst1++;
        }

        printf("\n");
    }
    return 0;
}*/