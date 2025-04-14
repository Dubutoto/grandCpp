#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int factorial(int n){
    if(n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}

int main(){
    int N;
    cin >> N;

    int num = factorial(N);

    string s = to_string(num);
    reverse(s.begin(), s.end());

    int count = 0;

    for(char c: s){
        if(c == '0'){
            count++;
        }else{
            break;
        } 
    }

    cout << count << '\n';
    
    return 0;
}