#include <iostream>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    

    while(T--){
        int x;
        cin >> x;
        vector<int> v(x + 1); // v[x] : x를 나타내는 방법의 수
        v[1] = 1;
        v[2] = 2;
        v[3] = 4;
        v[4] = 7;

        for(int i = 5; i <= x; i++){
            v[i] = v[i-1] + v[i-2] + v[i-3];
        }

        cout << v[x] << '\n';

    }

    return 0;
}