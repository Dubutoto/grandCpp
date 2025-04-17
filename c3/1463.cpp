#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long N;

    cin >> N;

    vector<int> dp(N+1); // 인덱스 i 가 1이 되는 연산횟수를 저장할 벡터
                         // 1-based 이므로 + 1
    
    dp[1] = 0;

    for(int i = 2; i <= N; i++){
        dp[i] = dp[i - 1] + 1; 

        if(i % 2 == 0){
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }

        if(i % 2 == 0){
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }

        if(i % 3 == 0){
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
    }

    cout << dp[N] << '\n';
    return 0;
}