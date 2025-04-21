#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<pair<int, int>> edges;
int N;

bool check(int k){ //앞에서 부터 K개의 비교 정보만 사용 함
    vector<vector<int>> graph(N + 1);
    vector<bool> visited(N + 1, false);

    //그래프 여기서 그림 -> 이진 트리 사용과 연결되는 부분
    for(int i = 0; i < k; i++){
        int a = edges[i].first;
        int b = edges[i].second;
        graph[a].push_back(b); //방향 그래프니까 이것만 a < b 를 의미
    }

    queue<int> q;
    q.push(1);
    visited[1] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        if(node == N) return true; //중요
        for(int next : graph[node]){
            if(!visited[next]){
                visited[next] = true;
                q.push(next);
            }
        }
    }

    fill(visited.begin(), visited.end(), false); //방문 기록 초기화

    q.push(N);
    visited[N] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        if(node == 1) return true;
        for(int next: graph[node]){
            if(!visited[next]){
                visited[next] = true;
                q.push(next);
            }
        }
    }

    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    int hint = N*(N - 1)/2;

    edges.reserve(hint);

    //egdes 벡터를 앞에서부터 필요한 만큼만 꺼내서 그래프를 만들 것.
    for(int i = 0; i < hint; i++){
        int a, b;
        cin >> a >> b;
        edges.emplace_back(a, b);
    }

    //이진 탐색으로 "최소 정보 개수" 찾을 것임
    int left = 1, right = hint; // 최소 1개에서 hint 개
    int answer = -1;

    //계속 비교
    while(left <= right){
        int mid = (left + right)/2;
        if(check(mid)){
            answer = mid;
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }

    cout << answer << '\n';
    return 0;
}