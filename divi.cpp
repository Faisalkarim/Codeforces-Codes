#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int a,b,t,n,c=0;
    cin>>t;
    while(t--){
        cin>>a>>b;

        if(a%b==0){
            cout<<"0"<<endl;
        }
        else {
            n=a/b;
            c=(b*(n+1))-a;
            cout<<c<<endl;
        }



    }



}
