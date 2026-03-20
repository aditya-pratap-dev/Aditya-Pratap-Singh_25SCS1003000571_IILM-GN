#include<iostream>
using namespace std;
class A{
    int a;
    int b;
    public:
    A(){
        cout<<"Default Constructer\n";

    }
    A(int x, int y){
    cout<<"Two  Para\n";


    }
    A(int x){
        cout<<"One Para\n";

    }  
    ~A(){
        cout<<"Destructer Invoked\n";
    }
};
int main(){
    {A ob;}
    {A ob1(3);}
    {A ob2(6,9);}
    
    return 0;
}    