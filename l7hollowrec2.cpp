#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter the number of rows: ";
    cin>>m;

    int n;
    cout<<"enter the number of coloumn: ";
    cin>>n;

    for(int i=1; i<=m; i++ ){
        for(int j=1; j<=n; j++){
            if(i==1 || j==n || i==m || j==1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}