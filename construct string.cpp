#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        for(int i=0;i<n;i++){

            char f='a'+i%b;
                cout<<f;
            if(i==n-1){
                cout<<endl;
            }
        }



    }







}
