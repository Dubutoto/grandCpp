#include <iostream>
#include <vector>
#include <queue>

using namespace std; 

vector<vector<int>> maze;
vector<vector<int>> visited; // 탐색 여부 + 이때까지 왔던 거리 기록용

//좌표 + 최단거리 벡터
int dx[4] = {-1, 1, 0, 0}; // 상 하 좌 우
int dy[4] = {0, 0, -1, 1};
    

void bfs(int x, int y){
    queue<pair<int,int>> q;
    q.push({x, y}); // pair 형태 큐라 이렇게 insert
    visited[x][y] = 1;

    //여기에 이제 탐색 코드 ㅇㅋ
    while(!q.empty()){
        auto current = q.front();
        int cx = current.first;
        int cy = current.second;

        q.pop();

        for (int i = 0; i < 4; i++){
            int nx = cx + dx[i]; // 기존위치 + x좌표 변경값
            int ny = cy + dy[i];

            // 에러 방지용 범위 체크
            if(nx < 0 || ny < 0 || nx >= maze.size() || ny >= maze[0].size()){
                continue;
            }

            if(maze[nx][ny] == 1 && visited[nx][ny] == 0){
                visited[nx][ny] = visited[cx][cy] + 1;
                q.push({nx,ny});
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    
    maze.resize(N, vector<int>(M));
    visited.resize(N, vector<int>(M, 0));

    for(int i = 0; i < N; i++){
        string row;
        cin >> row;
        for (int j = 0; j < M; j++){
            maze[i][j] = row[j] - '0'; // 문자 -> 정수 변환
        }
    }

    // maze[0][0] -> maze[N-1][M-1] 으로 이동하는 최단거리
    bfs(0,0);
    cout << visited[N-1][M-1] << '\n'; 

    return 0;
}