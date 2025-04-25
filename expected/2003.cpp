#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;

    cin >> N >> M;

    vector<int> numbers(N);

    for(int i = 0; i < N; i++){
        cin >> numbers[i];
    }

    int right = 0;
    int left = 0;
    int count = 0;
    int sum = 0;

    while(right < N){
        sum = sum + numbers[right];

        while(sum > M){
            sum -= numbers[left];
            left++;
        }

        if(sum == M){
            count++;
        }

        right++;
    }

    cout << count << '\n';

    return 0;
}