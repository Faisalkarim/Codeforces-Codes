#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cstring>

using namespace std;
int main(){
string a,b;
int c=0,n,i,m,q;
cin>>n;
string f[n];
for(i=0;i<n;i++){
    cin>>f[i];
}
cin>>m;
string j[m];
for(i=0;i<m;i++){
        cin>>j[i];
        c=0;
    for(q=0;q<n;q++){
       if(f[q].find(j[i])!=string::npos){
        a=f[q];
        c++;
        }
    }
        if(c>0){
    cout<<c<<" " <<a<<endl;
}
    else if(c==0){
        cout<<0<<" "<<'-'<<endl;
    }
    }


}
