#include <iostream>
#include <vector>
#include <queue>

using namespace std; 

vector<vector<int>> graph;
vector<bool> visited;

void bfs(int start){
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(int next : graph[node]){
            if(!visited[next]){
                q.push(next);
                visited[next] = true;
            } 
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    graph.resize(N + 1);
    visited.resize(N + 1);
    
    for(int i = 0; i < M; i++){
        int x, y;
        cin >> x >> y;

        graph[x].push_back(y);
        graph[y].push_back(x); // 무방향
        
    }
    
    bfs(1);

    return 0;
}