#include<iostream>
using namespace std;
int a;
class Aditya{
    public:
    ~Aditya (){
        a=110;
    }
};
int iilm(){
    a=65;
     Aditya v1;
    return a;
}
int main(){
    cout<<iilm()<<endl;
    cout<<"aditya";
    return 0;
}     