#include<bits/stdc++.h>
using namespace std;


    int fibb(int n){

        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        else{
            return fibb(n-1)+fibb(n-2);
        }




// fibb



    }
int main(){

    int n;
    cin>>n;

    cout<<fibb(n-1);

}
