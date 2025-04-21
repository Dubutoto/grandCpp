#include <iostream>
#include <vector>

using namespace std; 

int x[5][5];

int countBingo(){
    int bingo = 0;

    for(int i = 0; i < 5; i++){
        bool line = true;
        for(int j = 0; j < 5; j++){
            if (x[i][j] != 0) line = false;
        }
        if (line) bingo++;
    }

    for(int j = 0; j < 5; j++){
        bool line = true;
        for(int i = 0; i < 5; i++){
            if (x[i][j] != 0) line = false;
        }
        if (line) bingo++;
    }

    bool diag1 = true;
    for(int i = 0; i < 5; i++){
        if(x[i][i] != 0) diag1 = false;
    }
    if (diag1) bingo++;

    bool diag2 = true;
    for(int i = 4; i >= 0; i--){
        if (x[4 - i][i] != 0) diag2 = false;
    }
    if(diag2) bingo++;

    return bingo;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int y[25];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> x[i][j]; 
        }
    }

    for(int i = 0; i < 25; i++){
        cin >> y[i]; 
    }

    for(int k = 0; k < 25; k++){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                if(y[k] == x[i][j]){
                    x[i][j] = 0;
                }
            }
        }

        if(k >= 11 && countBingo() >= 3){
            cout << k + 1 << '\n';
            break;
        }
    }
    return 0;
}