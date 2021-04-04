#include<bits/stdc++.h>
using namespace std;
int main(){

    string s1,s2="1111111",s3="0000000";
        cin>>s1;
    if(s1.find(s2) != std::string::npos || s1.find(s3) != std::string::npos){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }




}
