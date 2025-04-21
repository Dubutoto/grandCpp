#include <iostream>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> dp(max(N+1 , 3));

    dp[1] = 1;
    dp[2] = 3;

    for(int i = 3; i < N + 1; i++){
        dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
    }

    cout << dp[N] << '\n';
    return 0;
}