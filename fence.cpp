#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n,k,l,sum,ma=0,j;
    cin>>n>>k;
    vector<long long int>v;
    for(int i=0;i<n;i++){
        cin>>l;
        v.push_back(l);
    }

    for(int i=0;i<(n+1)-k;i++){
               sum=v[i]+v[i+1]+v[i+2];
    if(i==0){
        ma=sum;
        j=1;
    }
    else{
       if(ma>sum){
        ma=sum;
        j=i+1;
       }
    }
    }
    cout<<j;

}
