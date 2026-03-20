#include<iostream>
#include<iomanip>
using namespace std;
class fib{
    int n;
    int a=0,b,n_term;
    public:
    fib(){
        cout<<"Enter number other than 0 and 1";
        cin>>n;
        cout<<"The fibonacci series upto"<<n<<"term is:"<<endl;
        a=0,b=1;
        cout<<a<<endl<<b<<endl;
    }
    void fibo();
};
void fib::fibo(){

    for(int i = 2; i<=n;i++){
        n_term = a+b;
        cout<<n_term<<endl;
        a=b;
        b=n_term;
    }
}
int main(){
    fib num1;
    num1.fibo();
    int a=11;
    int b=4;
    cout<<fixed<<setprecision(3);
    float f=a/(float)b;
    cout<<f;



    return 0;
}  