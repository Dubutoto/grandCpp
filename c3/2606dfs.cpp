#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>>graph;
vector<bool>visited;

int dfs(int node, int& count){
    visited[node] = true;
    for(int next: graph[node]){
        if(!visited[next]){
            count++;         //증감
            dfs(next, count);
        }
    }
    return count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;

    graph.resize(N + 1);
    visited.resize(N + 1, false);

    //무방향 그래프 양쪽 다연결 주의
    while(M--){
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x); //이것주의
    }
    int count = 0;
    int answer = dfs(1, count);

    cout << answer << '\n';

    return 0;
}