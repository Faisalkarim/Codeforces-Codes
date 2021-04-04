#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,x=0;
    char s[150][3];
        cin>>n;
      for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            if(s[i][1]=='+'){
                x++;
            }
            else{
                x--;
            }
        }
cout<<x;



}
