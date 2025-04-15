#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){

    int N, M;
    cin >> N;
    vector<int> v1(N);

    for(int i = 0; i < N; i++){
        cin >> v1[i];
    }

    sort(v1.begin(), v1.end());

    
    cin >> M;
    vector<int> v2(M);

    for(int i = 0; i < M; i++){
        cin >> v2[i];
    }

    for(int i = 0; i < M; i++){
        if(binary_search(v1.begin(),v1.end(),v2[i])){
            cout << "1" << '\n';
        }else{
            cout << "0" << '\n';
        }
    }
    
    return 0;
}