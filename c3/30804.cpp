#include <iostream>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    
    return 0;
}