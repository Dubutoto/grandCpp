#include <iostream>
#include <algorithm>

using namespace std; 

int main(){

    string input;

    while(1){
        cin >> input;

        if(input == "0") break; 

        string ori = input;
        reverse(input.begin(),input.end());
        if(ori == input){
            cout << "yes" << '\n';
        }else{
            cout << "no" << '\n';
        }
    }
    return 0;
}