#include <iostream>

using namespace std; 

int factorial(int n);

int main(){

    int N,K;

    cin >> N >> K;

    cout << factorial(N) / (factorial(N-K) * factorial(K)) << '\n';  

    return 0;
}

int factorial(int n){
    if(n == 0 || n == 1) return 1;

    return n * factorial(n - 1);
}