#include <iostream>
#include <vector>
#include <cmath>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int M, N;

    cin >> M >> N;

    //N + 1 로 하는건 0은 안쓸것, index 자체가 그 숫자, 값은 소수 여부.
    vector<bool> isPrime(N + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;

    for(int i = 2; i <= sqrt(N); i++){
        if(isPrime[i]){
            for(int j = i * i; j <= N; j = j + i){
                isPrime[j] = false;
            }
        }
    }

    for(int i = M; i <= N; i++){
        if(isPrime[i]){
            cout << i << '\n';
        }
    }

    return 0;
}