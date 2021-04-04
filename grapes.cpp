#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a[3],b[3];
    cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2];
    if(a[0]+a[1]+a[2]>b[0]+b[1]+b[2]){
        cout<<"NO"<<endl;
    }
    else{
        if(a[0]>b[0]){
            cout<<"NO"<<endl;
        }
        else if(a[1]>(b[0]+b[1])-a[0]){
            cout<<"NO"<<endl;
        }
        else if(a[2]>(b[0]+b[1]+b[2])-(a[0]+a[1])){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

}
