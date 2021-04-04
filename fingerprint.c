#include<stdio.h>
int main()
{
    int n,m,i,a[9],b[9],c[9],k=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<m;i++){
        scanf("%d ",&b[i]);
    }
    for(i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[j]==b[i]){
                c[k]=b[i];
                k++;
            }
        }
    }
    for(i=0;i<k-1;i++){
        printf("%d ",c[k]);
    }
    return 0;
}

