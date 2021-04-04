#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n,m,k,sum=0,i,j,q,t;
    cin>>n>>m>>k;
    vector<long long int>v;
    for(i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    if(m<=k){
        cout<<v[0]*k;
    }
    else if(m>k){
           j=(v[0]*k)+v[1];
           q=m/(k+1);
            sum=(q*j)+((m%(k+1))*v[0]);
            cout<<sum;
    }





}
