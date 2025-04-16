#include <iostream>
#include <stack>


using namespace std;

bool checkBalanced(const string& line){

    stack<char> s;

    for(char c: line){
        if(c == '(' || c == '['){
            s.push(c);
        }else if(c == ')'){
            if(s.empty() || s.top() != '(') return false;
            s.pop();
        }else if(c == ']'){
            if(s.empty() || s.top() != '[') return false;
            s.pop();
        }
    }

    if(!s.empty()) return false;

    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string line;

    while(true){
        getline(cin, line);
        if (line == ".") break;

        cout << (checkBalanced(line) ? "yes" : "no") << '\n';

    }

    return 0;
}