#include <iostream>

using namespace std;

int dp[41][2]; //문제에서 제시한 범위만큼 설정

void precompute(){
    dp[0][0] = 1;
    dp[0][1] = 0;

    dp[1][0] = 0;
    dp[1][1] = 1;

    for(int i = 2; i <= 40; i++){
        dp[i][0] = dp[i-1][0] + dp[i-2][0];
        dp[i][1] = dp[i-1][1] + dp[i-2][1];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    precompute(); // 까먹지 말고 실행;;

    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int x;
        cin >> x;
        cout << dp[x][0] << " " << dp[x][1] << '\n';
    }
    
    return 0;
}
