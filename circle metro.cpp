#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,x,b,y;


    cin>>n>>a>>x>>b>>y;

    while(a!=x && b!=y){

        a++;
        if(a==n+1){
            a=1;
        }
        b--;
        if(b==0){
            b=n;
        }
         if(a==b){
            cout<<"YES";
            return 0;
        }
        }
            cout<<"NO";
        }
