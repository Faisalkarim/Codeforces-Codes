#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n,m;

    cin>>n;
    long long int a[n],i;
    for(i=0;i<n;i++){
            cin>>a[i];
        }

    cin>>m;
    long long int b[m];
        for(i=0;i<m;i++){
                cin>>b[i];
        }


long long int k=0;

       for(i=0;i<m;i++){
            if(a[k]!=b[i]){
                cout<<b[i]<<" ";
            }
            else{
                k++;
            }
       }







}
