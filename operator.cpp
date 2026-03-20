#include<iostream>
using namespace std;
class box{
    int length,width,height;
    public:
    void data(){
        cout<<"Enter length,width,height:";
        cin>>length>>width>>height;
    }
    int volume(){
        return length*width*height;
    }
    bool operator>(box b) {
        return volume()>b,volume();
    }
};
int main(){
    box b1+b2
}

    }
}