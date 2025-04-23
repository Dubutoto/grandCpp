#include <iostream>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int count = 0;
    int l = 1;
    int r = 1;
    int sum = 0;

    while(l <= N){

        if(sum >= N){
            sum -= l;
            l++;
        }else if(r == N + 1){
            break;
        }else if(sum < N){
            sum += r;
            r++;
        }

        if(sum == N){
            count++;
        }

    }

    cout << count << '\n';
    return 0;
}