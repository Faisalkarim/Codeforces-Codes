#include<bits/stdc++.h>
using namespace std;
int main(){

    int n=5,b=0,a;
    while(n--){
        cin>>a;
        b+=a;
    }
    if(b%5==0 && b>0){
        cout<<b/5;
    }
    else{
        cout<<"-1";
    }









}
