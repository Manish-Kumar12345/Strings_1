// 3. Check whether the given string is palindrome or not.
#include<iostream>
#include<string>
using namespace std;
bool check(string &s){
    int i = 0, j = s.size() - 1;
    while( i < j){
        if(s[i] != s[j]) return false;
        //else return true;
        i++;
        j--;
    }
}
int main(){
    string s;
    cin>>s;
    
    cout<<(check(s) ? "Yes" : "No");

    
}