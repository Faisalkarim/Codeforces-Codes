#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){


    string s;
    int t=0;
    cin>>s;

     if (std:: all_of(s.begin(), s.end(), [](unsigned char c){ return std::isupper(c); })) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        std::cout << s;
    }
     else if(islower(s[0]) && std:: all_of(s.begin()+1, s.end(), [](unsigned char c){ return std::isupper(c); })){

    transform(s.begin()+1,s.end(),s.begin()+1,::tolower);
        s[0]=toupper(s[0]);
    cout<<s;

    }
    else{
        cout<<s;
    }

}
