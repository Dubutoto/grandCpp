#include <iostream>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K;

    cin >> N >> K;
    vector<int> v(N);

    for(int i = N - 1; i >= 0; i--){ //거꾸로 받을때 범위 주의.
        int x;
        cin >> x;
        v[i] = x;
    }

    int count = 0;

    while(K != 0){
        for(int i = 0; i < N; i++){
            if(v[i] <= K){ // 같아도 된다!
                count = count + K/v[i];
                K = K % v[i]; 
            }
        }
    }

    cout << count << '\n';

    return 0;
}
