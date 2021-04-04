#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long n,k,c=0,g=0;
        vector<long long int>v,m;
        string s;
        cin>>n>>k>>s;
        for(int i=0;i<s.size();i++){
            v.push_back(s[i]-'0');
            if(v[i]==1){
                c=1;
                m.push_back(i+1);
            }
        }


        if(c==0){
            cout<<n/(k+1)<<endl;
            continue;
        }

         for(int i=0;i<m.size()-1;i++){
            g+=(m[i+1]-m[i])/(k+1);
        }
        cout<<g<<endl;


    }







}
