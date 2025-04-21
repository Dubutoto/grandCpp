#include <iostream>
using namespace std;

//재귀
void fibonacci(int n, int& count0, int& count1) {
    if (n == 0) {
        count0++;
    } else if (n == 1) {
        count1++;
    } else {
        fibonacci(n - 1, count0, count1);
        fibonacci(n - 2, count0, count1);
    }
}

//DP
int dp0[41];
int dp1[41];

void precompute(){
    dp0[0] = 1; dp0[1] = 0;
    dp1[0] = 0; dp1[1] = 1;

    for(int i = 2; i <= 40; i++){
        dp0[i] = dp0[i - 1] + dp0[i - 2];
        dp1[i] = dp1[i - 1] + dp0[i - 2];  
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    precompute();

    while (T--) {
        int n;
        cin >> n;

        cout << dp0[n] << " " << dp1[n] << '\n';
    }

    return 0;
}