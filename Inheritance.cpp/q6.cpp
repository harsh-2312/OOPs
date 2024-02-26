// Write a C++ Program to show access to Private Public and Protected using 
// // Inheritance 

#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"harsh limbachiy"<<endl;
    }
};
class B : public A{
    public:
    B(){
        cout<<"age:22"<<endl;
    }
};
class C : public B{
    public:
    C(){
        cout<<"city:surat"<<endl;
    }
};
int main(){
    C c;
    
}