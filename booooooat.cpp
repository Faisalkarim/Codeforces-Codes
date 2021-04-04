#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n]={0},b[100]={0},sum[101]={0};

        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        for(int i=0;i<101;i++){

        }
        for (int i = 0; i < n-1; i++) {
            for (int j = 1; j < n; j++) {
               if(b[a[i]]<=0 || b[a[j]]<=0){
                continue;
               }
               else{
                    sum[a[i]+a[j]]++;
                    b[a[i]]--;
                    b[a[j]]--;
               }
        }
        }
        int ma=0;
        for(int i=0;i<=101;i++){
            ma=max(ma,sum[i]);
        }
        cout<<ma<<endl;

}

    }


