#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int K;
    long long N;

    cin >> K >> N;
    vector<long long> v;

    for(int i = 0; i < K; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    long long start = 1; //자를수 있는 최소
    long long end = *max_element(v.begin(), v.end()); //최대
    long long answer = 0; //조건 만족하는 길이중 가장큰값 최신화하면서 저장할 변수

    while(start <= end){

        long long mid = (start + end)/2; // 최소 최대의 중간값(이진 탐색을 위해)
        long long count = 0; // 자르면 총 몇개 나오는지 목표: N

        for(int i = 0; i < K; i++){
            count = count + v[i]/mid; 
        }

        if(count >= N){
            //N 개 보다 많이 나오니까 자를 길이를 늘려봄.
            answer = mid;
            start = mid + 1;
        }else{
            //N 개 보다 덜 나오니까 자를 길이 줄인다.
            end = mid - 1;
        }
    }

    cout << answer << '\n';
    return 0;
}