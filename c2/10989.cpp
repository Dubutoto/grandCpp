#include <iostream>
#include <array>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, x;
    cin >> N;

    array<int, 10001> count = {0};

    for(int i = 0; i < N; i++){
        cin >> x;
        count[x]++;
    }

    for(int i = 1; i <= 10000; i++){
        while (count[i] > 0){
            cout << i << '\n';
            count[i]--;
        }
    }
    return 0;
}