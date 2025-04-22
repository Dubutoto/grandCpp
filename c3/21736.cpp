#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> field;
vector<vector<bool>> visited;
int N, M, meet;

int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

void dfs(int x, int y){
    visited[y][x] = true;

    for(int d = 0; d < 4; d++){
        int nx = x + dx[d];
        int ny = y + dy[d];

        if(nx >= 0 && ny >= 0 && nx < M && ny < N){
            if(!visited[ny][nx] && field[ny][nx] != 'X'){
                visited[ny][nx] = true;
                if(field[ny][nx] == 'P') meet++;
                dfs(nx,ny);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    field.resize(N, vector<char>(M));
    visited.resize(N, vector<bool>(M,false));

    int x = 0;
    int y = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> field[i][j];
            if(field[i][j] == 'I'){
                y = i;
                x = j;
            } 
        }
    }

    dfs(x, y);
    if(meet == 0){
        cout << "TT" << '\n';
        return 0;
    }
    
    cout << meet << '\n';
    return 0;
}