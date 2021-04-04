#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long int n,i,k,l;
        cin>>n;
        string s;
        if(n%4==0){
            k=n/4;
        }
        else{
            k=(n/4)+1;
        }
        if(n==1){
            cout<<"8"<<endl;
        }
        else if(n==2){
            cout<<"98"<<endl;
        }
        else if(n==3){
            cout<<"998"<<endl;
        }
        else if(n==4){
            cout<<"9998"<<endl;
        }
        else{
            for(l=1;l<=n-k;l++){
                s+='9';
            }
            for(l=1;l<=k;l++){
                s+='8';
            }
            cout<<s<<endl;
        }
    }




}
