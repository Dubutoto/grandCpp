#include <iostream>
#include <stack>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;

    cin >> N;
    stack<int> s;

    while(N--){
        int x;
        cin >> x;

        if (x == 0 && !s.empty()){
            s.pop();
        }else{
            s.push(x);
        }
    }

    int sum = 0;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }

    cout << sum << '\n';
  
    return 0;
}