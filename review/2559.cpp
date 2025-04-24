#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;

    cin >> N >> K;

    vector<int> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }

    int left = 0;
    int right = 0;
    int sum = 0;
    int max_sum = -1e9;

    while(right < N){

         if(right - left > K){
            sum -= v[left];
            left++;
         }

         if(right - left == K){
            max_sum = max(max_sum, sum);
         }

         sum += v[right];
         right++;
    }

    cout << max_sum << '\n';
    
    return 0;
}