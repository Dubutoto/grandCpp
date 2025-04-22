#include <iostream>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<long long>dp(max(N + 1,3));

    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i < N + 1; i++){
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007; //나누라는 경우 미리 나눠서 계산 빠르게 
    }

    cout << dp[N] % 10007 << '\n';
    return 0;
}