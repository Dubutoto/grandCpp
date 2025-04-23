#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N;
    vector<int> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    cin >> M;

    while(M--){
        int x;
        cin >> x;

        if(binary_search(v.begin(), v.end(), x)){
            cout << 1 << '\n';
        }else{
            cout << 0 << '\n';
        };
    }

    return 0;
}