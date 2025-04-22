#include <iostream>
#include <vector>

using namespace std;

int M, N, K;

vector<vector<int>> field;
vector<vector<bool>> visited;

const int dx[4] = {0,0,-1,1};
const int dy[4] = {-1,1,0,0};

void dfs(int x, int y){
    visited[y][x] = true;

    for(int d = 0; d < 4; d++){
        int nx = x + dx[d];
        int ny = y + dy[d];

        if(nx >= 0 && ny >= 0 && nx < M && ny < N){
            if(field[ny][nx] == 1 && !visited[ny][nx]){
                dfs(nx, ny);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--){

        cin >> M >> N >> K;

        field.assign(N, vector<int>(M,0));
        visited.assign(N, vector<bool>(M,false));

        for(int i = 0; i < K; i++){
            int a, b;
            cin >> a >> b;
            field[b][a] = 1;
        }

        int answer = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(field[i][j] == 1 && !visited[i][j]){
                    dfs(j, i);
                    answer++;
                }
            }
        }
        cout << answer << '\n';
    }
    return 0;
}