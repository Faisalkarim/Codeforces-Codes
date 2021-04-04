#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;
    while(t--){
        long long int n,i,c=0,cc=0;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        for(i=0;i<n;i++){
            if(s1[i]=='A' || s1[i]=='a' || s1[i]=='E' || s1[i]=='e' ||s1[i]=='I' || s1[i]=='i' || s1[i]=='O' || s1[i]=='o' || s1[i]=='U' ||s1[i]=='u'){
                c++;
            }
        }
        for(i=0;i<n;i++){
            if(s2[i]=='A' || s2[i]=='a' || s2[i]=='E' || s2[i]=='e' ||s2[i]=='I' || s2[i]=='i' || s2[i]=='O' || s2[i]=='o' || s2[i]=='U' ||s2[i]=='u'){
                cc++;
            }
        }
        if(c>cc){
            cout<<"First String"<<endl;
        }
        else if(cc>c){
            cout<<"Second String"<<endl;
        }
        else{
            cout<<"Equal"<<endl;
        }
    }








}
