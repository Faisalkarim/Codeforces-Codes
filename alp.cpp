#include<bits/stdc++.h>
using namespace std;
int main(){


string s;
int a[26]={0};

cin>>s;

for(int i=0;i<s.size();i++){
    a[s[i]-65]++;
}
int c=0;
for(int i=0;i<26;i++){
    if(a[i]==0){
        c++;
    }
}
cout<<c;




}
