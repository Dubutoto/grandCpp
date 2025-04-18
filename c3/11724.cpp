#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;


void dfs(int node){
    visited[node] = true;

    for(int next: graph[node]){
        if(!visited[next]){
            dfs(next);
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

    while(M--){
        int x, y;
        cin >> x >> y;

        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int count = 0;

    // dfs() 돌리면 연결된것은 전부 방문함.
    // 또 count 가 올랐다는것은 새로운 연결 요소니까 count++
    for (int i = 1; i <= N; i++){
        if(!visited[i]){
            dfs(i);
            count++;
        }
    }

    cout << count << '\n';

    return 0;
}