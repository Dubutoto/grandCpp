#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; 
    cin >> N;

    vector<int> v(N+1);
    vector<int> s(N+1);

    for(int i = 1; i <= N; i++){
        int x;
        cin >> x;
        v[i] = x;
    }

    sort(v.begin(), v.end());

    for(int i = 1; i <= N; i++){
        s[i] = s[i - 1] + v[i];
    }

    int answer = accumulate(s.begin(), s.end(), 0);

    cout << answer << '\n';
    return 0;
}