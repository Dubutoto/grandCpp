#include <iostream>
#include <regex>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string input;
    cin >> input;

    regex pattern("(100+1+|01)+");

    if(regex_match(input,pattern)){
        cout << "SUBMARINE" << '\n';
    }else{
        cout << "NOISE" << '\n';
    }
    
    return 0;
}