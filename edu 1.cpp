#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;
    while(t--){
        int n,c=0,k=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(a[0]==n || a[n-1]==n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<"1 ";
            for(int i=1;i<n;i++){
                if(a[i]>a[0] && c==0){
                    cout<<i+1<<" ";
                    c=1;
                    k=a[i];
                }
                else if(k>a[i] && c==1){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }










}
