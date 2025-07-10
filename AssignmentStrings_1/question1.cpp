//1.Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 0-based indexing.
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int i = 1; i < s.size(); i = i+2){
        s[i] = '#';
    }
    cout<<s;
}