#include <iostream>
#include <queue>
#include <algorithm>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--){

        int N, M;
        cin >> N >> M;
        
       queue<pair<int, int>> q;
       priority_queue<int> pq;

       for(int i = 0; i < N; i++){
            int x;
            cin >> x;
            q.push({x, i});
            pq.push(x);
       }

       int count = 0;
       // 동작

       while(!q.empty()){
        int curPriority = q.front().first;
        int curIndex = q.front().second;
        q.pop();

        if(curPriority == pq.top()){
            pq.pop();
            count++;

            if(curIndex == M){
                cout << count << '\n';
                break;
            }
        } else {
            q.push({curPriority,curIndex});
        }
       }
    }
    return 0;
}