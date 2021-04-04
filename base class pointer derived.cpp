#include<iostream>
using namespace std;

    class base{
public:
    void func(){
        cout<<"fuck";
    }
    };

    class derived:public base{
    public:
        void func1(){
        cout<<"shit";
        }
    };


     int main(){
        derived d;
        base *p=&d;
        p->func();

    }


