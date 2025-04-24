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

    int left = 1;
    int right = house[N-1] - house[0];
    int answer = 0;

    while(left <= right){
        int mid = (left + right) / 2;
        int count = 1;
        int last = house[0];

        for(int i = 1; i < N; i++){
            if(house[i] - last >= mid){
                count++;
                last = house[i];
            }
        }

        if(count >= C){
            answer = mid;
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }

    cout << answer << '\n';

    return 0;
}