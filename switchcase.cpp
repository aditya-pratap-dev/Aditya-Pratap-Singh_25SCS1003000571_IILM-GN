#include<iostream>
using namespace std;
int sum(int x , int y )
{
    return x+y;
}
int sub(int x, int y)
{
    return x-y;
}
int Mul(int x, int y)
{
    return x*y;
}
int Div(int x, int y)
{
    return x/y;
}
int mod(int x , int y)
{
    return x%y;
}
int main() {
    int a,b;
    char ch;
    while(ch!='q'){
    
    cout<<"Enter the operator: ";
    cin>>ch;
    if (ch=='q')
    {
        cout<<"You Entered 'q' ";
        break;
    }
    cout<<"Enter the numbers a and b :";
    cin>>a>>b;
    switch(ch){  
        case '+':
        cout<<"You entered "<<ch<<endl;
        cout<<"Answer = "<<sum(a,b)<<endl;
        break;
        case '-':
        cout<<"You entered "<<ch<<endl;
        cout<<"Answer = "<<sub(a,b)<<endl;
        break;
        case '*':
        cout<<"You entered "<<ch<<endl;
        cout<<"Answer = "<<Mul(a,b)<<endl;
        break;
        case '/':
        cout<<"You entered "<<ch<<endl;
        cout<<"Answer = "<<Div(a,b)<<endl;
        break;
        case '%':
        cout<<"You entered "<<ch<<endl;
        cout<<"Answer = "<<mod(a,b)<<endl; 
        break;




    }
    }
}