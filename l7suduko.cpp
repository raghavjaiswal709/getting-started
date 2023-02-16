#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows: ";
    cin>>n;

    for (int i=1; i<n+1; i++){
        for(int j=i; j<n+1; j++){
            cout<<j;
        }
        for (int K=1; K<i; K++){
        cout<<K;
    }
    cout<<endl;
    
    
    }
    return 0;

}