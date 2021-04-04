#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k=2,l=1;
    string a,b,t;
    vector<string>v;

    cin>>t;
    v.push_back(t);
    cin>>t;
    v.push_back(t);
    cin>>n;

        for(int i=1;i<=n;i++){
            cin>>a>>b;

            if(a==v[l]){


                v.push_back(b);
                 v.push_back(v[l-1]);
                l=l+2;
            }
            else if(a==v[l-1]){

                v.push_back(b);
                v.push_back(v[l]);
                l+=2;
            }
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
            if(i%2!=0){
                cout<<endl;
            }
        }









}
