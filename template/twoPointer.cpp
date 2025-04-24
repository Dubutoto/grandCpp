#include <iostream>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;

    int N, K;
    int l = 0, r = 0;
    while(r < N){
        // 조건만족하면
        if(1){
            //결과 처리
        }
        // 조건 불만족
        else{
            l++;
        }
    }

    // OR 슬라이딩 윈도우 방식
    while (r < N){
        // 구간 확장   
        while (r < N && 1) //조건 만족시
        { //r 처리
        }


        // 조건 불만족시, 구간 축소
        while(0 /*조건 불만족*/){
            //l++;
        }
    }

    int l = 0, r = 0, sum = 0;
    int maxSum = 0;
    
    // 고정길이 슬라이딩 윈도우
    while (r < N) {
        sum += v[r];

        //먼저 써져 있지만 결국 r이 이동해야 따라 이동하는 방식
        if (r - l + 1 > K) {
            sum -= v[l];
            l++; 
        }

        // 정확히 고정길이 일때만 비교, 값 갱신.
        if (r - l + 1 == K) {
            maxSum = max(maxSum, sum);
        }

        //이동
        r++;
    }
    return 0;
}