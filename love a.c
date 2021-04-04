#include<stdio.h>
#include<string.h>
int main(){

    char a[50],i,b=0,c;
    scanf("%s",a);
    c=strlen(a);
    for(i=0;i<c;i++){
        if('a'== a[i]){
            b++;
        }
    }


    if((2*b-1)>=c){
        printf("%d",c);

    }
    else{
        printf("%d",(c-(2*b-1)-1));
    }

return 0;
}
