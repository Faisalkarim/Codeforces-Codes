#include<bits/stdc++.h>
using namespace std;

int main(){

   string s;
   set<int>d;
   cin>>s;

   for(int i=0;i<s.size();i++){
    d.insert(s[i]-'97');
   }

   if(d.size()%2==1){
        cout<<"IGNORE HIM!";
   }
   else{
    cout<<"CHAT WITH HER!";
   }


}
