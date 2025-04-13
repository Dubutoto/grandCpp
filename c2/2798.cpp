#include <iostream>
#include <vector>

using namespace std; 

int main(){

    int N, M;
    cin >> N >> M;
    
    vector<int> v(N);

    for(int i = 0; i < N; i++){
        cin >> v[i];
    }

    int sum = 0;

    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            for(int k = j + 1; k < N; k++){
                if((v[i]+v[j]+v[k]) >= sum && v[i]+v[j]+v[k] <= M)
                sum = v[i]+v[j]+v[k];
            }
        }
    }

    cout << sum << endl;
  
    return 0;
}