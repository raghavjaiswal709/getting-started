#include<iostream>
using namespace std;
 int main(){
    int length;
    int breadth;

    cout<<"enter the length: ";
    cin>>length;

    cout<<"enter the breadth: ";
    cin>>breadth;

    if (length==breadth){
        cout<<"it's a square";
    }
    else {
        cout<<"not a square";
    }
    return 0;
 }