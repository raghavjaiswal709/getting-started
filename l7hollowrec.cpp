#include<iostream>
using namespace std;

int main(){
int m;
cout<<"enter the number of rows: ";
cin>>m;

int n;
cout<<"enter the number of coloumn: ";
cin>>n;

for(int i=1; i>=n; i++){
    for(int j=1; j>=m; j++){
    if (i==1 || i==n || j==1 || j==m ){
        cout<<"*";
    }
    else{
        cout<<" ";
    }
}

}
return 0;
}