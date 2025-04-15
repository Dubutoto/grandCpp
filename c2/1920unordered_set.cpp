#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std; 

int main(){

    int N, M;
    cin >> N;
    
    unordered_set<int> s;

    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        s.insert(x);
    }

    cin >> M;
    for(int i = 0; i < M; i++){
        int y;
        cin >> y;
        if(s.count(y)){
            cout << "1" << '\n';
        }else{
            cout << "0" << '\n';
        }
    }
    return 0;
}