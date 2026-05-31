#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter number of lines :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=2*i-1;
        int b=1,c;
        for(int k=1;k<=n-i;k++) printf(" ");//use nsp=n-i;
        for(j=1;j<=a;j++){//or use third loop for that extra cheez other than 123..
            if(j<=a/2+1){
                printf("%d",b);
                c=b;
                b++;
            }
            else {
                c--;
                printf("%d",c);
            }
        }
        printf("\n");
    }
    return 0;
}
/*o/p
enter number of lines :4
   1
  121
 12321
1234321
*/
