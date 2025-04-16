#include <iostream>
#include <unordered_map>

using namespace std; 

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;

    cin >> N;

    unordered_map<int, int> um;

    for(int i = 0; i < N; i++){
        int x;
        cin >> x; 
        um[x]++;
    }

    cin >> M;

    while(M--){
        int x;
        cin >> x;
        cout << um[x] << " ";
    }
    cout << endl;
    
    return 0;
}