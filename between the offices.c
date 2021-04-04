#include<stdio.h>
int main(){

    int n,y=0,i,h=0;
    char a[100];

        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        for(i=0;i<(n-1);i++){
            if(a[i]=='S'&& a[i+1]=='F'){
                y++;
            }
            else if((a[i]=='F' && a[i+1]=='S')|| a[i]==a[i+1]){
                h++;
            }
        }
        if(y>h){
            printf("YES");
        }
        else if(h>y || h==y){
            printf("NO");
        }












return 0;
}
