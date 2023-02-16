#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number: ";
    cin>>n;
    
    int sum;
    do{
        n+n-1;
        n--;
    }
    while(n>0);
    cout<<sum<<endl;
    return 0;


}