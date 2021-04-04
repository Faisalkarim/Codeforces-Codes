#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,x,b,y;


    cin>>n>>a>>x>>b>>y;

        vector<int>v,k;

        while(a!=x){
            if(a==n){
                v.push_back(a);
                a=1;
            }
            else{
                v.push_back(a);
                a++;
            }
        }
        while(b!=y){
            if(b==1){
                k.push_back(b);
                b=n;
            }
            else{
                k.push_back(b);
                b--;
            }
        }
        v.push_back(x);
        k.push_back(y);
        for(int i=0;i<min(v.size(),k.size());i++){
            if(v[i]==k[i]){
                cout<<"YES";
                return 0;
            }
        }
        cout<<"NO";


        }

