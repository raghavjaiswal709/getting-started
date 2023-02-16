#include<iostream>
using namespace std;

int main(){
    int cp;
    int sp;
    int c;

    cout<<"enter the cost prise: ";
    cin>>cp;

    cout<<"enter the selling price: ";
    cin>>sp;

    c=cp-sp;

    if (c<0) {
        cout<<"loss of rupees: "<<(-1*c) <<endl;
    }
    else {
        cout<<"profit of rupees "<<c <<endl;
    }
    return 0;

}