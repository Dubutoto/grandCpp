#include <iostream>
#include <map>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        map<string, int> m;

        for(int i = 0; i < N; i++){
            string x, y;
            cin >> x >> y;
            m[y]++;
        }
        int sum = 1;
        for(auto kv : m){
            sum = sum * (kv.second + 1);
        }
        cout << sum - 1 << '\n';;
    }

    return 0;
}