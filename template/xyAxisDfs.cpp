#include <iostream>
#include <vector>

using namespace std;

int T, M, N, K;
vector<vector<int>> field;
vector<vector<bool>> visited;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void dfs(int x, int y){
    visited[y][x] = true;

    for(int d = 0; d < 4; d++){
        int nx = x + dx[d]; //  다음 x 좌표
        int ny = y + dy[d]; //  다음 y 좌표

        if(nx >= 0 && ny >= 0 && nx < M && ny <N){
            if(!visited[ny][nx] && field[ny][nx] == 1){
                dfs(nx, ny);
            }
        } // 범위 벗어나지 않게 하기위함. 체크용

    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    field.assign(N, vector<int>(M, 0));
    visited.assign(N, vector<bool>(M, false));

    return 0;
}