#include<stdio.h>
int main(){

    unsigned long long int n,m,p,q,r,s,t,u,f;

            scanf("%llu",&n);

            m=n/100;
            p=n%100;

            q=p/20;
            r=p%20;

            s=r/10;
            t=r%10;

            u=t/5;
            f=t%5;

            printf("%llu",m+q+s+u+f);
return 0;
}
