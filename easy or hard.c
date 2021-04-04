#include<stdio.h>
int main(){

    int a,b[100],i,hard=0,easy=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++){
        if(b[i]==0){
            easy++;
        }
        else if(b[i]==1){
            hard++;
        }


    }
    if(hard>0){
        printf("hard");
    }
    else if(hard==0){
        printf("easy");
    }
return 0;
}
