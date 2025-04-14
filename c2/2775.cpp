#include <iostream>

using namespace std; 

int func(int k, int y);

int main(){

    int T,k,n;

    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> k >> n;
        cout << func(k,n) << endl;
    }
    return 0;
}

int func(int k, int n){
    
    if(k == 0) return n;

    int sum = 0;

    for(int i = 1; i <= n; i++){
            sum += func(k - 1, i);
    }
    
    return sum;
}