#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number: ";
    cin>>n;

    int a;
    cout<<"enter the second number: ";
    cin>>a;

    int i=n;

    while(true){
        if(n%a==0){
            cout<<n<<endl;
            break;
        }
        n+=i;
    }
    return 0;
}