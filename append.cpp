#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
            long long int n,i,ma=0,sq,mq;
        cin>>n;
        if(n==1 ){
            cout<<"0"<<endl;
            continue;
        }
        sq= sqrt(n);
        mq=sq;
        if(sq*sq==n){
            cout<<(2*sq)-2<<endl;
            continue;
        }
        while(sq++){
            if(mq*sq>= n){
                cout<<(mq+sq)-2<<endl;
                break;
            }

        }




    }

}
