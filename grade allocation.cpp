#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n,m,sum=0;
        cin>>n>>m;
        int a[n]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }

        if(m<=sum){
            cout<<m<<endl;
        }
        else if(m>sum){
            cout<<sum<<endl;
        }

    }





}
