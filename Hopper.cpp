#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k,g,t,p=0,l=0;
    string s;

    cin>>n>>k;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(s[i]=='T') t=i;
        if(s[i]=='G') g=i;
    }
    for(int i=min(t,g);i<=max(t,g);i=i+k){
        if(s[i]=='#'){
            cout<<"NO";
            return 0;
        }
        else if(i==max(t,g)){
            p=1;
        }
    }
    if(p==1){
    cout<<"YES";
    }
    else{
        cout<<"NO";
    }








}
