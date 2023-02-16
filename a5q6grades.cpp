#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the marks: ";
    cin>>a;

    if(100>=a>=90)  {
        cout<<"Your grade is A+!";
    }

    else if (89>=a>=80) {
        cout<<"Your grade is A!";
    }
    else {
        cout<<"you need to work hard!";
    }

    return 0;
}