#include<iostream>
using namespace std;
int main(){

    long long int a,b,n,s,q;
    cin>>q;
    while(q--){
        cin>>a>>b>>n>>s;
        if(((a*n)+b)>=s){
                if((s%n)<=b){
            cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
        }
        else{
            cout<<"NO"<<endl;
        }
    }






}
