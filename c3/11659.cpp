#include <iostream>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> v(N);
    vector<int> prefix(N + 1, 0); //누적합 계산용 벡터 하나 더 생성
    
    for(int i = 0; i < N; i++){
        cin >> v[i];
        prefix[i + 1] = prefix[i] + v[i];
    }

    while(M--){
        int start, end;
        cin >> start >> end;
        cout << prefix[end] - prefix[start - 1] << "\n";
    }

    return 0;
}