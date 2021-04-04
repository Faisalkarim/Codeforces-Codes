#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    long long int n,c;
    cin>>t;
    while(t--){
            cin>>n;
            long long a[n]={0};
    vector<long long int>v,g;
    long long p=1,h=0;
    for(int i=0;i<n;i++){
        cin>>c;
        v.push_back(c);
    }
    sort(v.begin(),v.end());

 for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

for(int i=0;i<n;i++){
       a[v[i]]++;
    }







    }

}

