#include<iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a line of text: ";
    getline(cin, str);
    cout << "You entered: " << str << endl;
    return 0;
}