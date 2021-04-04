#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        long long int n,p=1,sum=0;
        cin>>n;
        if(n==1){
            cout<<"0"<<endl;
        }
        else{
        for(int i=3;i<=n;i=i+2){
                long long int u=i-2,s=i*i,d=u*u;
            sum+=p*(s-d);
            p++;
        }
        cout<<sum<<endl;

    }
    }










}

