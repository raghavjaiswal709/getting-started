#include<iostream>
using namespace std;

int main (){

    int n;
    cout<<"enter the number: ";
    cin>>n; 

    int sum=0;

    int i=1;
    while(i<=n) {
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
  return 0;    
}