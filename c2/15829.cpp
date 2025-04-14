#include <iostream>

using namespace std; 

int main(){

    int x;
    string str;
    cin >> x >> str;

    const int r = 31;         // 해싱 규칙 공식 값
    const int m = 1234567891; // 범위 오버 안하게 나눠줄 값

    long long hash = 0;
    long long power = 1;

    for(int i = 0; i < x; i++){
        int a_i = str[i] - 'a' + 1;
        hash = (hash + a_i * power) % m;
        power = (power * r) % m;
    }

    cout << hash << endl;

    return 0;
}