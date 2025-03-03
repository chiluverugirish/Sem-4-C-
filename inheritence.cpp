#include<iostream>
using namespace std;
class Box{
    public:
        int publicvar;
    void display(){
        cout<<"The public var"<<publicvar<<endl;
    }
    
};
class Derived:public Box{
    public:
        void display(){
        display();
    }
        void modify(int p){
             publicvar=p;
    }
    
};
int main(){
    Derived d ;
    d.modify(4);
    d.display();
    return 0;
}