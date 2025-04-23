#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> dist(100001, -1);
queue<int> q;

void bfs(int start){
    dist[start] = 0;
    q.push(start);

    while(!q.empty()){
        int curr = q.front(); q.pop();

        for(int next: {curr-1,curr+1,curr*2}){
            if(next <= 100000 && next >= 0 && dist[next] == -1){
                dist[next] = dist[curr] + 1;
                q.push(next);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;
    bfs(N);

    cout<< dist[K] << '\n';

    return 0;
}