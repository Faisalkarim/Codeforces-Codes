#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    int n,r=0,ma=0;

    cin>>s;
    s=s+'A';
    for(int i=0;i<s.size();i++){
        if(strchr("AEIOUY",s[i])){
            if(ma<((i+1)-r)){
                ma=(i+1)-r;
            }

        r=i+1;
        }
    }

cout<<ma;







}
