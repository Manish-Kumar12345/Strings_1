#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // reverse first half 
    int len = s.length();
    reverse(s.begin(), s.begin() + len/2);
    cout<<s;
}