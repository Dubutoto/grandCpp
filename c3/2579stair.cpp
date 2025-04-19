#include <iostream>

using namespace std; 


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;

    vector<int> stair(N + 1);
    vector<int> dp(N + 1);

    for(int i = 1; i <= N + 1; i++){
        cin >> stair[i];
    }

    dp[1] = stair[1];
    

    return 0;
}