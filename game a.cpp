#include<bits/stdc++.h>
using namespace std;
#define x 15
int pc()
{
    int j,e,n;
    cout<<"How many coins?";
    cin>>j;
    cout<<"max take:";
    cin>>e;

    while(1)
    {
        if(j>0){
        int y=j%(e+1);
        cout<<"PC:"<<y<<endl;
        j=j-y;
        if(j==0){
            break;
        }
        }


        cout<<"P1: ";
        cin>>n;
            if(n>e){
                cout<<"invalid take"<<endl;
                return 0;
            }
        j=j-n;
        if(j==0){
            break;
        }
        }

    cout<<"PC wins,hahah"<<endl;

}
int duel(){
 int k,p1,p2,l;
 k=x;
 while(1){
      cout<<"P1: ";
      cin>>p1;
      k=k-p1;
      if(k==0){
       cout<<"P1 wins"<<endl;
       break;
      }
      else{
      cout<<"P2: ";
      cin>>p2;
      k=k-p2;
      if(k==0){
       cout<<"P2 wins"<<endl;
       break;
      }
     }
     }


}
int main(){
   while(1){
     int a;
    cout<<"1.Play with PC"<<endl<<"2.DUEL"<<endl<<"Press any button to exit"<<endl;
    cin>>a;
   if(a==1){
      pc();
   }
   else if(a==2){
    duel();
   }
   else{
    break;
   }
   }


}
