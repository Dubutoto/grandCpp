#include <iostream>

using namespace std; 

int main(){

    int x;
    string num;
    int sum = 0;

    cin >> x >> num;

    for(int i = 0; i < x; i++){
        // 아스키코드로 형변환
        sum = sum + num[i] - '0'; 
    }
    
    cout << sum << endl;

    return 0;
}