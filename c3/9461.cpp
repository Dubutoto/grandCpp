#include <iostream>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;

    cin >> T;

    while(T--){
        int N;
        cin >> N;
        vector<long long> dp(max(N + 1, 6));
        dp[0] = 0;
        dp[1] = dp[2] = dp[3] = 1;
        dp[4] = dp[5] = 2;

        if(N>=6){
            for(int i = 6; i < N + 1; i++){
                dp[i] = dp[i - 1] + dp[i - 5];
            }
        }
        cout << dp[N] << '\n';

    }

    return 0;
}