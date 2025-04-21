#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> lighter;
vector<vector<int>> heavier;

int N, M;

int check(int goods, const vector<vector<int>>& graph){
    vector<bool> visited;
    queue<int> q;
    visited.resize(N + 1, false);
    
    q.push(goods);
    visited[goods] = true;
    int count = 0;

    while(!q.empty()){
        int node = q.front(); q.pop();
        
        for(int next: graph[node]){
            if(!visited[next]){
                visited[next] = true;
                q.push(next);
                count++;
            }
        }
    }
    
    return count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    lighter.resize(N + 1);
    heavier.resize(N + 1);

    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        heavier[a].push_back(b);
        lighter[b].push_back(a);
    }

    for(int i = 1; i < N + 1; i++){
        int light = check(i, heavier);
        int heavy = check(i, lighter);
        int unknown = N - 1 - (light + heavy);
        cout << unknown << '\n';
    }

    return 0;
}