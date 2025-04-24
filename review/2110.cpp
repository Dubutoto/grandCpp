#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, C;
    cin >> N >> C;

    vector<int> house(N);

    for(int i = 0; i < N; i++){
        cin >> house[i];
    }

    sort(house.begin(), house.end());

    int start = 0; //가장 작은값 
    int end = house[N - 1] - house[0]; //가장 큰 값
    int answer = 0;

    // start 와 end 를 기준으로 반으로 나눈후 지속해서 갱신해서 최적해를 도출
    while(start <= end){
        int mid = (start + end) / 2;
        int count = 1; //공유기 설치 갯수
        int last = house[0]; // 마지막 공유기 설치 위치

        for(int i = 1; i < N; i++){
            if(house[i] - last >= mid){
                count++;
                last = house[i];
            }
        }

        if(count >= C){
            answer = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    cout << answer << '\n';

    return 0;
}