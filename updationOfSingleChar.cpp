#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "manish";
    // cout<<str<<endl;
    // str[1] = 'o'; // in C++ strings are muteable in java it is not .
    // cout<<str<<endl;
    string str = "manish";
    cout<<str<<endl;
    // kaam
    for(int i = 0; str[i] != '\0'; i++){
        if(i % 2 == 0) str[i] = 'a';
    }
    
    cout<<str<<endl;
}