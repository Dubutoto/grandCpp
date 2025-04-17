#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string A, B;
    cin >> A >> B;

    vector<vector<int>> dp(A.size()+1,vector<int>(B.size()+1, 0));

    for(int i = 1; i <= A.size(); i++){
        for(int j = 1; j <= B.size(); j++){
            if (A[i - 1] == B[j - 1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    stack<char> st;
    int i = A.size();
    int j = B.size();

    while(i > 0 && j >0){
        if(A[i - 1] == B[j - 1]){
            st.push(A[i - 1]);
            i--;
            j--;
        }else if(dp[i - 1][j] > dp[i][j - 1]){
            i--;
        }else{
            j--;
        }
    }
    
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }

    cout << '\n';
    return 0;
}