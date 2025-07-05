// Input a string of even length and reverse the second half of the string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"Enter the input string"<<endl;
    string s;
    cin>>s;
    cout<<s<<endl;
    int n = s.length();
    // revrsing the second half
    reverse(s.begin() + n/2, s.end());
    cout<<"String after the second half"<<endl<<s;

}