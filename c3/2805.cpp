#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> tree;

long long cut(long long x){
    long long sum = 0;

    for(int i = 0; i < tree.size(); i++){
        if (tree[i] > x) {
            sum += tree[i] - x;
        }
    }

    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N, M;
    cin >> N >> M;

    tree.resize(N);

    for(int i = 0; i < N; i++){
        cin >> tree[i];
    }


    long long start = 0;
    long long end = *max_element(tree.begin(), tree.end());
    long long answer = 0;

    while(start <= end){
        
        long long mid = (start + end) / 2;

        if(cut(mid) >= M){
            answer = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    
    cout << answer << '\n';
    
    return 0;
}