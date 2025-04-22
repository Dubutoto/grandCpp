#include <iostream>
#include <vector>
#include <queue>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> minHeap;

    int T;
    cin >> T;

    while(T--){
        int x;
        cin >> x;

        if(x == 0){
            if(!minHeap.empty()){
                cout << minHeap.top() << '\n';
                minHeap.pop();
            }else{
                cout << 0 << '\n';
            }
        }else{
            minHeap.push(x);
        }
    }
    return 0;
}