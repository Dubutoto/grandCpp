#include <iostream>
#include <vector>

using namespace std; 

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int node){
    visited[node] = true;
    
    for(int next: graph[node]){
        if (!visited[next]){
            dfs(next);
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

    // 그래프 연결 -> 사실상 2중배열에 값을 넣는식


    dfs(1); // 1번 노드에서 시작

    return 0;
}