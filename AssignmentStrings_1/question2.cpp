// 2. Input a string of length n and count all the consonants in the given string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int c = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            c++;
        }
    }
    cout<<"No of consonants in the given string is "<<n-c;
    
}