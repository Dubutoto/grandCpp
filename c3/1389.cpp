#include <iostream>
#include <vector>
#include <queue>
#include <numeric>
#include <map>

using namespace std;

vector<vector<int>> graph;
vector<int> dist;

void bfs(int start){
    dist[start] = 0;
    queue<int> q;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();
            for(int next: graph[node]){
                if(dist[next] == -1){
                dist[next] = dist[node] + 1;
                q.push(next);
            }
        }
    }
}

bool custom(const pair<int, int>& a,const pair<int, int>& b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    graph.resize(N+1);
    dist.resize(N+1, -1);

    for(int i = 0; i < M; i++){
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    vector<pair<int,int>> rank;

    for(int i = 1; i < N + 1; i++){
        bfs(i);
        int k = accumulate(dist.begin(),dist.end(),0);
        rank.push_back({i ,k});
        dist.assign(N+1, -1);    
    }

    sort(rank.begin(),rank.end(),custom);

    cout << rank[0].first << '\n';

    return 0;
}