#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;

    vector<int> stair(N + 1);
    
    for(int i = 1; i < N + 1; i++){
        cin >> stair[i];
    }

    if(N == 1){
        cout << stair[1] << '\n';
        return 0;
    }

    if(N == 2){
        cout << max(stair[1] + stair[2], stair[2]) << '\n';
        return 0;
    }

    vector<int> dp(N + 1);

    dp[1] = stair[1];
    dp[2] = max(stair[2], stair[1] + stair[2]);
    dp[3] = max(dp[1] + stair[3], stair[2] + stair[3]); 

    for(int i = 4; i < N + 1; i++){
        dp[i] = max(
            dp[i - 2] + stair[i], 
            dp[i - 3] + stair[i - 1] + stair[i]
        );
    }

    cout << dp[N] << '\n';

    return 0;
}