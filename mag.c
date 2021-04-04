#include<stdio.h>
int main(){

    int a[100000],b[100000],i,n,sum=0,k=0;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++){
        b[i]=a[i]%10;
    }
    for(i=0;i<n;i++){
        if(b[i]==b[i+1]){
            sum=sum+a[i];
        }

    }
    if(sum>0 || sum==0){
        k++;
    }

printf("%d",k);
return 0;
}
