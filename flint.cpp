#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;
        if(n<=30){
            cout<<"NO"<<endl;
        }
        else if(n==36){
             cout<<"YES"<<endl;
            cout<<"6 10 15 5"<<endl;
        }
        else if(n==40){
             cout<<"YES"<<endl;
            cout<<"6 10 15 9"<<endl;
        }
        else if(n==44){
             cout<<"YES"<<endl;
            cout<<"6 10 15 13"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<"6 10 14 "<<n-30<<endl;
        }
    }








}
