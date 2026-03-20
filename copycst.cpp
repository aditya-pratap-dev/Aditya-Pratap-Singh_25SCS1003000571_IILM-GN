#include<iostream>
using namespace std;
class ABC{
    int a;
    int b;
    public:
    ABC(){
        a= 10;
        b= 20;
    }
    ABC(int x, int y){
        a=x;
        b=y;
    }
    void printab(){
        cout<<endl<<a<<endl<<b<<endl;
    }
    ABC(ABC &o){
        a=o.a*2;
        b=o.b;
    }
};

int main(){
    ABC v1;
    ABC v2(44,99); // parametric constructer 
    v2.printab();
    ABC v3(v2);
    // ABC v3=v2;
    v3.printab();


    return 0;
}