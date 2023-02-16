#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;

    int sum=0;
    do{
        int num;
        cout<<"enter the difference: ";
        cin>>num;
        sum+=num;
        n--;
    }while(n>0);
    
    cout<<"the sum is: "<<sum<<endl;

    return 0;
}