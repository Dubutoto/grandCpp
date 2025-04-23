#include <iostream>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }

    vector<int> freq(10, 0);

    int r = 0;
    int l = 0;
    int kind = 0;
    int answer = 0;

    while(r < N){
        if (freq[v[r]] == 0) kind++;
        freq[v[r]]++;
        r++;

        while(kind > 2){
            freq[v[l]]--;
            if(freq[v[l]] == 0) kind--;
            l++;
        }

        answer = max(answer, r - l);
    }

    cout << answer << '\n';
    return 0;
}