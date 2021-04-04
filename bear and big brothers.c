#include<stdio.h>
int main(){

    int a,b,i=0;
    scanf("%d %d",&a,&b);

    while(1){
        if(a>b){
            break;
        }
        else{
            i++;
            a=a*3;
            b=b*2;
        }
    }
    printf("%d",i);
return 0;
}
