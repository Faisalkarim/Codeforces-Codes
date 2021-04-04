#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long int r,g,b,w,sum=0,a=0,u=0;
        cin>>r>>g>>b>>w;
        sum=r+g+b+w;
        if(r==0 && g==0 && b==0 && w==0){
            cout<<"Yes"<<endl;
            continue;
        }
        if(r==0 && g==0 && b==0){
            cout<<"Yes"<<endl;
            continue;
        }
        if(r==0 && g==0 && w==0){
            cout<<"Yes"<<endl;
            continue;
        }
        if(r==0 && b==0 && w==0){
            cout<<"Yes"<<endl;
            continue;
        }
        if(g==0 && b==0 && w==0){
            cout<<"Yes"<<endl;
            continue;
        }


        if(r%2==0){
                if(r>0){
                    a++;
                }
        }
        else{
            u++;
        }
        if(g%2==0){
             if(g>0){
                    a++;
                }

        }
        else{
            u++;
        }
        if(b%2==0){
             if(b>0){
                    a++;
                }

        }
        else{
            u++;
        }
        if(w%2==0){
            if(w>0){
                    a++;
                }
        }
        else{
            u++;
        }

        if(sum%2==0){
            if(a%2==0 u){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else if(sum%2!=0){
            if(u==1 || u==3 && a>0 ){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }







}
