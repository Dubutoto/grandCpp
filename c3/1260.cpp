#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>>graph;
vector<bool> visited;
vector<int> dfsResult;
vector<int> bfsResult;

void dfs(int node){

    visited[node] = true;
    dfsResult.push_back(node);
   // if(graph[node].size() > 1) sort(graph[node].begin(), graph[node].end());

    for(int next: graph[node]){
        if(!visited[next]){
            visited[next] = true;
            dfs(next);
        }
    }
}

void bfs(int start){
    visited[start] = true;
    bfsResult.push_back(start);
    queue<int> q;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();
       // if(graph[node].size() > 1) sort(graph[node].begin(), graph[node].end());

        for(int next: graph[node]){
            if(!visited[next]){
                visited[next] = true;
                q.push(next);
                bfsResult.push_back(next);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, V;
    cin >> N >> M >> V;

    graph.resize(N + 1);
    visited.resize(N + 1, false);

    while(M--){
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for(int i = 0; i < N + 1; i++){
        sort(graph[i].begin(),graph[i].end());
    }

    dfs(V);
    fill(visited.begin(), visited.end(), false);
    bfs(V);

    for(int x: dfsResult){
        cout << x << " ";
    }
    cout << '\n';

    for(int x: bfsResult){
        cout << x << " ";
    }
    cout << '\n';
    

    return 0;
}