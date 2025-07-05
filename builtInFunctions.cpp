#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = " mainsh kumar is at ims";
    // cout<<str.size();// length
    // int len = str.length();

    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e'); // only character can be pushed.
    // cout<<str<<endl;

    // string s = "manish";
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s<<endl;

    // string s = "abc";
    // cout<<s<<endl;
    // string t = "def";
    // s = s + t; // add karsakte hai aagaye ya piiche
    // cout<<s<<endl;

    string s = "abcef";
    cout<<s<<endl;
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    reverse(s.begin() + 2, s.begin() + 5);
    cout<<s<<endl;
}