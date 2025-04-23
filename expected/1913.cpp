#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, target;
    cin >> N >> target;

    // NxN matrix, initialized to 0
    vector<vector<int>> mat(N, vector<int>(N));

    // start in the center
    int r = N / 2;
    int c = N / 2;
    int num = 1;
    mat[r][c] = num;

    // record the position of 'target'
    int tr = r, tc = c;

    // directions: up, right, down, left
    int dr[4] = { -1, 0, 1,  0 };
    int dc[4] = {  0, 1, 0, -1 };

    int len = 1;    // steps to take in current leg
    int dir = 0;    // start by going 'up'

    // fill in numbers 2 through N*N
    while (num < N * N) {
        // for each length, we go two legs (e.g. up & right, then down & left, ...)
        for (int k = 0; k < 2; ++k) {
            for (int s = 0; s < len; ++s) {
                if (num >= N * N) break;
                r += dr[dir];
                c += dc[dir];
                ++num;
                mat[r][c] = num;
                if (num == target) {
                    tr = r;
                    tc = c;
                }
            }
            dir = (dir + 1) % 4;
        }
        ++len;
    }

    // print the matrix
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }

    // print the 1-based coordinates of 'target'
    cout << (tr + 1) << ' ' << (tc + 1) << '\n';

    return 0;
}
