#include<iostream>
using namespace std;
 
void print6(int n){
    for (int i = 1 ; i<=n ; i++){
        for ( int j=0 ; j<n-i+1 ; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n ; 
    cout<<"enter no. of rows: ";
    cin>>n;
    print6(n);
    return 0;
}