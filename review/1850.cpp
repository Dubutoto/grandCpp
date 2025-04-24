#include <iostream>
#include <vector>

using namespace std;

long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long A, B;
    cin >> A >> B ;

    long long answer = 0;
    if(A > B){
        answer = gcd(A, B);
    }else{
        answer = gcd(B, A);
    }

    for(long long i = 0; i < answer; i++){
        cout << '1';
    }
    
    cout << '\n';

    return 0;
}