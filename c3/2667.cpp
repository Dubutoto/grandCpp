#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

vector<vector<int>> field;
vector<vector<bool>> visited;

int dfs(int x, int y){
    if(field[y][x] == 0){
        return 0;
    }

    if(visited[y][x] == true){
        return 0;
    }

    visited[y][x] = true;
    int count = 1;

    for(int d = 0; d < 4; d++){
        int nx = x + dx[d];
        int ny = y + dy[d];

        if(nx >= 0 && ny >= 0 && nx < N && ny < N){ // 좌표밖 예외
            if(!visited[ny][nx]){
                count += dfs(nx,ny);                
            }
        }
    }
    return count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    field.resize(N,vector<int>(N));
    visited.resize(N,vector<bool>(N, false));

    for(int i = 0; i < N; i++){
        string row;
        cin >> row;
        for(int j = 0; j < N; j++){
            field[i][j] = row[j] - '0'; 
        }
    }

    vector<int> answer;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int t = dfs(j, i);
            if(t != 0){
                answer.push_back(t);
            }
        }
    }

    sort(answer.begin(),answer.end());
    cout << answer.size() << '\n';

    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << '\n';
    }

    return 0;
}