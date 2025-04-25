#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, B;

    cin >> N >> B;

    int remainder;
    string answer = "";
    

    while(N > 0){
        remainder = N % B;

        if(remainder < 10){
            answer += (char)(remainder + '0');
        }else{
            answer += (char)('A' + (remainder - 10));
        }

        N = N / B;
    }

    reverse(answer.begin(), answer.end());

    cout << answer << '\n';

    return 0;
}