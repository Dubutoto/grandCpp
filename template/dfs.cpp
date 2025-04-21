#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int start){
    visited[start] = true;

    for(int node: graph[start]){
        if(!visited[node]){
            dfs(node);
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;

    cin >> N >> M;

    graph.resize(N + 1);
    visited.resize(N + 1, false);

    for(int i = 0; i < M; i++){
        int x,y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x); // 무방향 그래프일 경우 양쪽 모두 추가해줘야함.
    }

    dfs(N); // dfs(시작 노드)

    return 0;
}