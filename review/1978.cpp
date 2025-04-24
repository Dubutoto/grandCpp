#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> v(N);
    int count = 0;

    for(int i = 0; i < N; i++){
        cin >> v[i]; 
    }

    for(int i = 0; i < N; i++){
        bool flag = true;

        if(v[i] == 0 || v[i] == 1)  continue;

        for(int j = 2; j <= sqrt(v[i]); j++){
            if(v[i] % j == 0){
                flag = false;
            }
        }
        if(flag) count++;
    }

    cout << count << '\n';

    return 0;
}