#include <iostream>
#include <stack>

using namespace std; 

int main(){

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        string str;
        cin >> str;
        stack<char> s;

        bool isValid = true;

        for(char c : str){
            if(c == '('){
                s.push(c);        
            }else if(c == ')'){
                if(s.empty()){
                    isValid = false;
                    break;
                }else{
                    s.pop();
                }
            }
        }

        if(isValid && s.empty()){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }

    }
    return 0;
}