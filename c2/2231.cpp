#include <iostream>

using namespace std; 

//brute force
int func(int x);

int main(){
    int N;
    int M = 0;

    cin >> N;

    for(int i = 1; i <= N; i++){
        if(func(i) == N){
        M = i;
        break;
        }
    }
    cout << M << endl;
    return 0;
}

int func(int x){
    int sum = x;
    while(x > 0){
        sum = sum + x % 10;
        x = x / 10;
    }
    return sum;
}