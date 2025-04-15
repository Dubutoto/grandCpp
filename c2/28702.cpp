#include <iostream>
#include <string>
#include <array>

using namespace std; 


string fizzbuzz(int n){

    if(n % 15 == 0) return "FizzBuzz";
    if(n % 3 == 0)  return "Fizz";
    if(n % 5 == 0)  return "Buzz";

    return to_string(n);
}

bool is_number(const string& s){
    for(char c : s){
        if(isdigit(c)) return true; 
    }
    return false;
}

int main(){

    array<string, 3> arr;

    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 3; i++){
        if(is_number(arr[i])){
            int num = stoi(arr[i]);
            int start = num - i;
            int answer = start + 3;
            cout << fizzbuzz(answer) << "\n";
            break;
        } 
    }
    return 0;
}