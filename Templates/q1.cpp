// 1. Write a program of to swap the two values using template

#include<iostream>
using namespace std;
template <class T>

void Swap(T &x, T &y){
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int x,y;
    cout<<"enter num1:";
    cin>>x;
    cout<<"enter num2:";
    cin>>y;

    cout<<"Before Swap:"<<endl;
    cout<<"num1:"<<x<<endl;
    cout<<"num2:"<<y<<endl;
    Swap(x, y);
    cout<<endl<<"After swap:"<<endl;
    cout<<endl<<"num1:"<<x<<endl;
    cout<<"num2:"<<y;

    return 0;
}