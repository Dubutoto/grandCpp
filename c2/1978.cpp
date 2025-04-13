#include <iostream>
#include <vector>
#include <cmath>

using namespace std; 

bool is_prime_number(int x);

int main(){

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i] ;
    }

    int count = 0;

    for(int i = 0; i < n; i++){
        if(is_prime_number(v[i])) count++;
    }

    cout << count << endl;

    return 0;
}

bool is_prime_number(int x){

    if(x <= 1) return false;

    int sq = static_cast<int>(sqrt(x));

    for(int i = 2; i <= sq; i++){
        if(x % i == 0) return false;
    }

    return true;
}