#include<bits/stdc++.h>
using namespace std;
int main(){


    int t,n,k;

    cin>>t;
    while(t--){
        cin>>n;
         vector<int>v;
         vector<int>b;
        for(int i=0;i<n;i++){
           cin>>k;
           v.push_back(k);
        }
        sort(v.begin(),v.end());

        for(int i=0;i<n-1;i++){
                int u=abs(v[i]-v[i+1]);
            b.push_back(u);
        }
        sort(b.begin(),b.end());


        cout<<b[0]<<endl;


    }
}
