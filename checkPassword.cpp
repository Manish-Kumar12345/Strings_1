#include<iostream>
#include<string>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<vector>
#include<cctype>
using namespace std;

bool checkPassword(string str){
    bool start = true;
    if(str[0] >= '0' && str[0] <= '9') start = false;
    bool spaceSlash = true;
    for(int i=0; i<str.length(); i++){
        if(str[i] == ' ' ||  str[i] == '/') spaceSlash = false;
    }
    bool hasNumber = false;
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            hasNumber = true;
            break;
        }

    }
    bool hasUppercase = false;
    for(int i = 0; i < str.length(); i++){
        if(isupper(str[i])){
            hasUppercase = true;
            break;
        }
    }
    if(hasUppercase && hasNumber && str.length() > 4 && spaceSlash && start) return true;
    else return false;
}
int main(){
    string str = "1M@nish123";

    cout<<checkPassword(str);
}