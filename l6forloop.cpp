#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number: ";
    cin>>n;

    int sum=0;
    for (int i=1;i<=100;i++){
        sum+=i;
    }
    cout<<"the sum is: "<<sum;

    return 0;
}