#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],o=0;
        string s[n],k="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvw";
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                o=1;
            }
        }
        if(o==1){
            for(int i=0;i<n;i++){
                cout<<k[i]<<endl;
            }
        }
        else{
        for(int i=0;i<n;i++){
            for(int j=0;j<a[i];j++){
                s[i]+='a';
            }
        }
        for(int i=0;i<n;i++){
            cout<<s[i]<<endl;
        }

    }
    }








}
