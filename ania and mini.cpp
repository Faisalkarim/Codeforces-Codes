#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n,k,c=0,v=1;
    string s;

    cin>>n>>k;
    cin>>s;

    if(n==1 && k>0){
        cout<<0;
    }
    else if(n>=1 && k==0){
        cout<<s;
    }
    else if(s[0]!='1'){
            s[0]='1';
        for(int i=1;i<n;i++){
                if(v<k && s[i]!='0'){
            s[i]='0';
            v++;
                }
        }
        cout<<s;
    }
        else if(s[0]=='1'){
        for(int i=1;i<n;i++){
                if(c<k && s[i]!='0'){
            s[i]='0';
            c++;
                }
        }
        cout<<s;
    }
    else{
        cout<<"0";
    }






}
