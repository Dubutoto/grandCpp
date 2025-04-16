#include <iostream>
#include <stack>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    stack <int> s;
    // + - 를 저장하기 위해 벡터!
    vector<char> result;
    int curr = 1;

    for(int i = 0; i < N; i++){
        int target;
        cin >> target;
   
        while(curr <= target){
            s.push(curr++);
            result.push_back('+');
        }

        if (s.top() == target){
            s.pop();
            result.push_back('-');
        }else{
            cout << "NO\n";
            return 0;
        }
    }

    for(char c: result){
        cout << c << '\n';
    }

    return 0;
}