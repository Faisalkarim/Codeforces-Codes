#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int t,n,sum=0,e=2,o=1,gum=0;


    cin>>t;
    while(t--){
        cin>>n;
        if((n/2)%2!=0){
            cout<<"NO"<<endl;
        }
        else{
                cout<<"YES"<<endl;
            for(int i=0;i<(n/2);i++){
                cout<<e<<" ";
                sum=sum+e;
                e=e+2;
            }
            for(int i=n/2;i<n-1;i++){
                cout<<o<<" ";
                gum=gum+o;
                o=o+2;
            }
        cout<<sum-gum;
           cout<<endl;

    e=2;
    o=1;
    sum=0;
    gum=0;
        }

    }




}
