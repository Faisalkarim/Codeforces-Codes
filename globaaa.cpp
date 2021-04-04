#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        long long int n,i,m=0;
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];

        }
        for(i=0;i<n;i++){
            if(a[i]!=a[i-i]){
                m=1;}
        }
        if(m==1){
            cout<<"1"<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }


}
