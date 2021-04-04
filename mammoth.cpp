#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,a[26]={0},t=0;
    cin>>n;
    char s[n]={0};

    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]!='?'){
            a[s[i]-65]++;
        }
        else{
            t++;
        }

    }
    int y=(a[0]+a[2]+a[6]+a[19]+t)/4;
     //cout<<a[0]<<" "<<a[2]<<" "<<a[6]<<" "<<a[19]<<" "<<y<<" "<<t<<endl;
    if(t==0 ){
            if( a[0]>y || a[2]>y || a[6]>y || a[19]>y){
                cout<<"===";
            }
            else{
        for(int i=0;i<n;i++){
            cout<<s[i];
        }
            }
    }
    else if((a[0]+a[2]+a[6]+a[19]+t)%4!=0 || a[0]>y || a[2]>y || a[6]>y || a[19]>y){
        cout<<"===";
    }
    else{

        for(int i=0;i<n;i++){

            if(s[i]=='?'){
               if(a[0]<y){
                s[i]='A';
                a[0]++;
               }
                else if(a[2]<y){
                s[i]='C';
                a[2]++;
               }
                else if(a[6]<y){
                s[i]='G';
                a[6]++;
               }
               else if(a[19]<y){
                s[i]='T';
                a[19]++;
               }

            }
        }
for(int i=0;i<n;i++){
            cout<<s[i];
        }


    }









}
