#include<iostream>
using namespace std;

int main ()  {

    int a;
    int b;
    int c;
    int addition;
    int subtraction;
    int multiplication;
    int division;
    int percentage;

    cout<<"enter the first digit:";
    cin>>a;
    cout<<"enter the second digit: ";
    cin>>b;
    cout<<"enter the third digit: ";
    cin>>c;

    addition=a+b+c;
    subtraction=a-b-c;
    multiplication=a*b*c;
    division=a/b/c;
    percentage=a/b*100;

    cout<<"the addition of the given digits is: " << addition <<endl;
    cout<<"the subtraction of the given digits is: " << subtraction <<endl;
    cout<<"the multiplication of the given digits is: " << multiplication <<endl;
    cout<<"the division of the given digits is: " << division <<endl;
    cout<<"the addition of the given digits is: " << percentage <<endl;
     return 0;
}

