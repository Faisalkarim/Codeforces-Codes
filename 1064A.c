#include<stdio.h>
int main(){

    int a[3],i,j,t;
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
int f=a[2];
int d=a[0]+a[1];
int e=d-f;
if(e>0){
    printf("0");
}
else if(e==0){
    printf("1");
}
else{
    printf("%d",(e*-1)+1);
}


return 0;
}
