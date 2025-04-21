#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int K, N;

    cin >> K >> N;

    vector<long long> v;

    for(int i = 0; i < K; i++){
        int x;
        cin >> x;
        v.emplace_back(x);
    }
    
    

    long long start = 1;
    long long end = *max_element(v.begin(),v.end());
    long long answer = -1;

    while(start <= end){
        
        long long mid = (start + end) / 2;
        long long count = 0;

        for(int i = 0; i < K; i++){
            count = count + v[i]/mid;
        }

        if(count >= N){
            answer = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    cout << answer << '\n';

    return 0;
}