#include <iostream>
#include <vector>
#include <cmath>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    if ((int)sqrt(N) * (int)sqrt(N) == N) {
        cout << 1 << '\n';
        return 0;
    }

    for(int i = 1; i*i <= N; i++){
        for(int j = 1; i*i + j*j <= N; j++){
            if(i*i + j*j == N){
                cout << 2 << '\n';
                return 0;
            }
        }
    }

    for(int i = 1; i*i <= N; i++){
        for(int j = 1; i*i + j*j <= N; j++){
                for(int k = 1; i*i + j*j + k*k <= N; k++){
                    if(i*i + j*j + k*k == N){
                        cout << 3 << '\n';
                        return 0;
                }
            }
        }
    }

    cout << 4 << '\n';
    
    return 0;
}