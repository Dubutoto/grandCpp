#include <iostream>
#include <vector>
#include <queue>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int> maxHeap;
    
    int T;
    cin >> T;

    while(T--){
        int x;
        cin >> x;
        if(x == 0){
            if(maxHeap.empty()){
                cout << 0 << '\n';
            }else{
                cout << maxHeap.top() << '\n';
                maxHeap.pop();
            }
        }else if(x >= 1){
            maxHeap.push(x);
        }
    }
    return 0;
}