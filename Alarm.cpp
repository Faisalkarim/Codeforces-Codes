#include<bits/stdc++.h>
using namespace std;
int main(){



    int t;
    long long int a,b,c,d;

        cin>>t;
        while(t--){
            cin>>a>>b>>c>>d;
            if(b>=a){
                cout<<b<<endl;
                continue;
            }
            else if(d>=c){
                cout<<"-1"<<endl;
                continue;
            }
            else if(a>b && c>d ){
                a=a-b;
                if(a%(c-d)==0){
                    cout<<b+ c*(a/(c-d))<<endl;
                    continue;
                }
                else{
                    cout<<b+ c*((a/(c-d))+1)<<endl;
                    continue;
                }
            }
        }












}
