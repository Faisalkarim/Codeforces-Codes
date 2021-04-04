#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;

    while(t--){
        long long int n,k,i,sum=0;

        cin>>n>>k;
        long long int a[n]={0};
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

         for(i=1;i<n;i++){
           sum+=(k-a[i])/a[0];
        }
        cout<<sum<<endl;



    }







}
