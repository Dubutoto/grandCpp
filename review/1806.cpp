#include <iostream>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, S; // N: 수열길이 S: 부분합

    cin >> N >> S;

    vector<int> v(N);

    for(int i = 0; i < N; i++){
        cin >> v[i];
    }

    int sum = 0;
    int r = 0;
    int l = 0;
    int length = 100000;

    while(true){
        if(sum >= S){
            length = min(length, r - l);
        }

        if(sum > S){
            sum -= v[l];
            l++;
        }else if(r == N){
            break;
        }else if(sum <= S){
            sum += v[r];
            r++;
        }
    }

    if (length == 100000){
        cout << 0 << '\n';
        return 0;
    } 
    
    cout << length << '\n';
    return 0;
}