#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;
    while(t--){
        int n,d=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                d++;
               }
            else if(s[i]==')' && d>0){
                d--;
            }
        }
        cout<<d<<endl;






    }









}
