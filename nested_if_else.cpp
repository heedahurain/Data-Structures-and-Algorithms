#include<iostream>
using namespace std;

int main(){

    int age;
    cin>>age;
    cout<<"Age: "<<age<<endl;

    if (age<18){
        cout<<"not eligible for job";
    }
    else if (age <=54){
        cout<<"elgible for job";
    }
    else if (age <=57){
        cout<<"eligible for job , retirement soon";
    }
    else {
        cout<<"retirement time";
    }
    return 0;
}