#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "manish";
    cout<<s<<endl;
    reverse(s.begin()+1, s.begin() + 5);
    cout<<s<<endl;
}