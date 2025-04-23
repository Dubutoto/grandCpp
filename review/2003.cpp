#include <iostream>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N , M;

    cin >> N >> M;
    vector<int> v(N);

    for(int i = 0; i < N; i++){
        cin >> v[i];
    }

    int l = 0;
    int r = 0;
    int count =0;
    int sum = 0;

    while(true){
        if(sum >= M){
            sum -= v[l];
            l++;
        }else if(r == N){
            break;
        }else if(sum < M){
            sum += v[r];
            r++;
        }

        if(sum == M) count++;
    }

    cout << count << '\n';

    return 0;
}