#include <iostream>
#include <vector>
#include <queue>

using namespace std; 

vector<vector<int>> graph;
vector<bool> visited;

void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        // 방문 완료 -> 큐에서 제외시킴
        // 다음 방문 탐색을 위한 반복문
        for(int next: graph[node]){
            if(!visited[next]){
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N; 
    cin >> N;
    graph.resize(N + 1);
    visited.resize(N + 1, false);

    bfs(1);


    return 0;
}