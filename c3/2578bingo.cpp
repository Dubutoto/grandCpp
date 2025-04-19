#include <iostream>
#include <vector>

using namespace std;

int countBingo(const vector<vector<int>>& v) {
    int cnt = 0;

    // 가로줄
    for (int i = 0; i < 5; i++) {
        bool ok = true;
        for (int j = 0; j < 5; j++) {
            if (v[i][j] != 0) ok = false;
        }
        if (ok) cnt++;
    }

    // 세로줄
    for (int j = 0; j < 5; j++) {
        bool ok = true;
        for (int i = 0; i < 5; i++) {
            if (v[i][j] != 0) ok = false;
        }
        if (ok) cnt++;
    }

    // 대각선 1
    bool diag1 = true;
    for (int i = 0; i < 5; i++) {
        if (v[i][i] != 0) diag1 = false;
    }
    if (diag1) cnt++;

    // 대각선 2
    bool diag2 = true;
    for (int i = 0; i < 5; i++) {
        if (v[i][4 - i] != 0) diag2 = false;
    }
    if (diag2) cnt++;

    return cnt;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> v(5, vector<int>(5));
    vector<int> called(25);

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> v[i][j];
        }
    }

    for(int i = 0; i < 25; i++){
        cin >> called[i];
        for(int x = 0; x < 5; x++){
            for(int y = 0; y < 5; y++){
                if(called[i] == v[x][y]) v[x][y] = 0; 
            }
        }    

        if(countBingo(v) >= 3){
            cout << i + 1 << '\n';
            return 0;
        }
    }
    return 0;
}