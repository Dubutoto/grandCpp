#include <iostream>
#include <unordered_map>


using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    unordered_map<string, string> m;
    while(N--){
        string x, y;
        cin >> x >> y;
        m[x] = y;
    }

    while(M--){
        string x;
        cin >> x;
        cout << m[x] << '\n';
    }

    return 0;
}
