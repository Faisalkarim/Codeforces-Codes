#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    vector<int>v;

    cin>>s;
    for(int i=0;i<s.size();i=i+2){
        v.push_back(s[i]);
    }

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]-48;
        if(i!=v.size()-1){
            cout<<"+";
        }
    }
}
