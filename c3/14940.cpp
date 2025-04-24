#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N,M;
vector<vector<int>> field;
vector<vector<int>> dist;
vector<vector<bool>> visited;
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0}; 

void bfs(int x, int y){
    visited[y][x] = true;
    queue<pair<int, int>> q;

    q.push({x,y});

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int d = 0; d < 4; d++){
            int nx = x + dx[d];
            int ny = y + dy[d];

            if(nx >= 0 && ny >= 0 && ny < N && nx < M){
                if(!visited[ny][nx] && field[ny][nx] == 1){
                    visited[ny][nx] = true;
                    q.push({nx,ny});
                    dist[ny][nx] = dist[y][x] + 1;
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    field.resize(N, vector<int> (M));
    visited.resize(N, vector<bool> (M, false));
    dist.resize(N, vector<int> (M, 0));
    int startX = 0;
    int startY = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> field[i][j];
            if(field[i][j] == 2){
                startX = j; startY = i;
            }
        }
    }

    bfs(startX,startY);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(field[i][j] == 0){
                cout << 0 << " ";
            }else if(!visited[i][j]){
                cout << -1 << " ";
            }else{
                cout << dist[i][j] << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}