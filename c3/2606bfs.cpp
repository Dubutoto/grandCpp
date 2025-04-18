#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

int bfs(int start, int &count){
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(int next: graph[node]){
            if(!visited[next]){
                q.push(next);
                visited[next] = true;
                count++;
            }
        }
    }
    return count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N;
    cin >> N >> M;

    graph.resize(N + 1);
    visited.resize(N + 1, false);

    while(M--){
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int count = 0;

    int answer = bfs(1, count);
    cout << answer << '\n';

    return 0;
}