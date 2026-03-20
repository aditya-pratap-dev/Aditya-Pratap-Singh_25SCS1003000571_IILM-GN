#include<iostream>
using namespace std;
class expense{
    int milk[3];
    int tea[3];
    int sugar[3];
    public:
    expense(){
        cout<<"Enter cost of milk :";
        for(int i=0 ; i<3 ; i++){
            cin>>milk[i];}
        cout<<"Enter cost of tea :";
        for(int i=0 ; i<3 ; i++){
        cin>>tea[i];
        cout<<"Enter cost of sugar :";}
        for(int i=0 ; i<3 ; i++){
        cin>>sugar[i];}
    }
    void display(){
      int milkcost=milk[0],sugarcost=sugar[0],teacost=tea[0],milkshop,sugarshop,teashop;
      for (int i = 1; i<3 ; i++){
        if (milk[i]<milkcost){
            milkcost = milk[i];
            milkshop=i+1;
        }if(sugar[i]<sugarcost){
            sugarcost = sugar[i];
            sugarshop=i+1;
        }if(tea[i]<teacost){
            teacost = tea[i];
            teashop=i+1;
        }   
        }
        cout<<"Buy milk from shop"<<milkshop<<"it will cost"<<endl;
        cout<<"Buy sugar from shop"<<sugarshop<<"it will cost"<<endl;
        cout<<"Buy tea from shop"<<teashop<<"it will cost"<<endl;
        }
    };
    int main(){
        expense v1;
        v1.display();

        return 0;
    }