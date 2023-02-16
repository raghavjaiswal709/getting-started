#include<iostream>
using namespace std;
int main()  {

    int num1=34;
    int num2=20;
    int num3=2;

    cout<<((num1 > num2) && (num3 < num2))<<endl;
    cout<<((num1 > num2) || (num2 < num3))<<endl;
    cout<<(!(num1 > num2))<<endl;

    cout<<(num1+=4)<<endl;
    cout<<(num2-=5)<<endl;

    return 0;
}