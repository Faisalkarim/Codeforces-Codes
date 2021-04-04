#include<stdio.h>
int main(){

    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            count++;
        if(i%2==1){
            printf("I hate");
        }
        else if(i%2==0){
            printf("I love");
        }
        if(count!=n){
            printf(" that ");
        }
        else if(count== n){
            printf(" it ");
        }

        }

return 0;
}
