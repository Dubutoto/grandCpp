#include <iostream>
#include <vector>
#include <queue>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K;

    cin >> N >> K;

    queue<int> q;
    vector<int> v;

    for(int i = 1; i <= N; i++){
        q.push(i);
    }

    
    while(q.size() != 0){
        for (int i = 0; i < K - 1; i++){
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front()); //제거 되는 사람 벡터에 기록
        q.pop(); //제거
    }

    cout << "<";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) cout << ", ";
    }
    cout << ">\n";
  
    return 0;
}