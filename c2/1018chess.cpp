#include <iostream>
#include <vector>

using namespace std; 

int main(){
    int N, M;

    cin >> N >> M;
    vector<string> chess(N);

    for(int i = 0; i < N; i++){
        cin >> chess[i]; 
    }

    // min() 쓸거라 대충 큰값으로 초기화
    int min_repaint = 1e9;
    
    // 자르는 위치를 순회 하기 위한 2중 for문
    for(int i = 0; i <= N - 8; i++){
        for (int j = 0; j <= M - 8; j++){

            int repaint_W = 0;
            int repaint_B = 0;

            // 자른 체스판 한칸씩 조회
            for(int a = 0; a < 8; a++){
                for(int b = 0; b < 8; b++){
                    // 순회해야하니까 인덱스 신경써야함.
                    char actual = chess[i + a][j + b];

                    // W로 시작할시 기대색
                    char w_start_c = ((a+b)%2 == 0) ? 'W' : 'B';

                    // B로 시작할시 기대색
                    char b_start_c = ((a+b)%2 == 0) ? 'B' : 'W';

                    if(actual != w_start_c) repaint_W++; 
                    if(actual != b_start_c) repaint_B++; 
                }
            }
            min_repaint = min(min_repaint, min(repaint_B,repaint_W)); 
        }
    }

    cout << min_repaint << '\n';

    return 0;
}