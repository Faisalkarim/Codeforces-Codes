#include<bits/stdc++.h>
using namespace std;
int main(){

        long long int n,i,q;
        scanf("%lld",&n);

         long long int a[n]={0};
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        scanf("%lld",&q);
        while(q--){
             long long int r,cnt,sum=0;
             scanf("%lld",&r);
             for(i=0;i<n;i++){
                  cnt = 1;
                    for (i = 1; i <= sqrt(a[i]); i++) {
                        if (a[i] % i == 0){
                                if(a[i]==1){
                                    continue;
                                }
                                else{
                                cnt++;
                                }
                        }
                }

                if(cnt<=r){
                    sum+=a[i];
                }
             }
             cout<<sum<<endl;
        }




}
