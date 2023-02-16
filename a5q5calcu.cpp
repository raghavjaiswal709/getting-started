#include<iostream>
using namespace std;

int main(){

    int a;
    int b;

    cout<<"enter the number: ";
    cin>>a;
    cout<<"enter the number: ";
    cin>>b;


    switch (a) {
        case '+':
        cout<<"the addition is: "<<a+b <<endl;
        case '-' :
        cout<<"the subtraction is: "<<a-b <<endl;
        case '*':
        cout<<"the multiplication is: "<<a*b <<endl;
        case '/':
        cout<<"the division is: " <<a/b <<endl;
    }

    return 0;
}
