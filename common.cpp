#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int k[2001]={0},j[2001]={0},a[n],b[m],c=0;

            for(int i=0;i<n;i++){
                cin>>a[i];
                k[a[i]]=1;
            }
            for(int i=0;i<m;i++){
                cin>>b[i];
                j[b[i]]=1;
            }
            for(int i=1;i<=1000;i++){
                if(j[i]==1 && k[i]==1){
                    cout<<"YES"<<endl<<"1 "<<i<<endl;
                    c=1;
                    break;
                }
            }
            if(c==0){
                cout<<"NO"<<endl;
            }


    }




}
