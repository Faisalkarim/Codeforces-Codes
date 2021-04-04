#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int A,B,sA,sB,x,y,z,d,e;

        cin>>A>>B;
        cin>>x>>y>>z;

        sA=(x*2)+(y);
        sB=(y+3*z);

        d=(sA-A);
        e=(sB-B);
        if(d>=0 && e>=0){
            cout<<d+e;
        }
        else if(d>=0 && e<0){
            cout<<d;
        }
        else if(d<0 && e>=0){
            cout<<e;
        }

        else{
            cout<<"0";
        }





}
