#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> field;
int countBlue = 0; // 1
int countWhite = 0; // 1

void divide(int x, int y, int size){
    int color = field[y][x];
    bool same = true;

    for(int i = y; i < y + size; i++){
        for(int j = x; j < x + size; j++){
            if(field[i][j] != color){
                same = false;
                break;
            }
        }
        if(!same) break;
    }

    if(same){
        if(color == 0) countWhite++;
        else countBlue++;
        return; // 중요
    }

    int half = size/2;

    divide(x, y, half);
    divide(x + half,y, half);
    divide(x, y + half, half);
    divide(x + half, y + half, half);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    field.resize(N, vector<int>(N));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> field[i][j]; // i = y, j = x
        }
    }

    divide(0, 0, N); //전체 종이 시작

    cout << countWhite << '\n';
    cout << countBlue << '\n';

    return 0;
}