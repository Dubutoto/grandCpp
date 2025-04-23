#include <iostream>
#include <vector>
#include <climits>

using namespace std; 

vector<vector<int>> field;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,M,B;
    cin >> N >> M >> B;

    field.resize(N,vector<int>(M));
    int maxHeight = 0;
    long long minTime = LLONG_MAX;
    int resultHeight = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> field[i][j];
            maxHeight = max(maxHeight, field[i][j]);
        }
    }

    for(int h = 0; h <= 256; h++){ //기준 블록 높이
        long long time = 0; // 브루트 포스라 여기 선언
        long long block = B; // 순회마다 블록개수도 초기화 되어야하니까

        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                int diff = field[i][j] - h;
                if (diff > 0){
                    time += diff * 2;
                    block += diff;
                }else if (diff < 0){
                    time += (-diff);
                    block -= (-diff); 
                }
            }
        }

        if (block < 0) continue;

        if(time < minTime || (time == minTime && h > resultHeight)){
            minTime = time;
            resultHeight = h;
        }

    }

    cout << minTime << " " << resultHeight << '\n';
    return 0;
}