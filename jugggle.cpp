#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string s[n];
        int k[26]={0},f=0;


        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<s[i].size();j++){
                k[s[i][j]-97]++;
            }
        }
        for(int i=0;i<26;i++){
            if(k[i]>0 && k[i]%n!=0){
                cout<<"NO"<<endl;
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<"YES"<<endl;
        }



    }







}
