#include <iostream>

using namespace std; 

int main(){

    int x,y;
    cin >> x >> y;

    if (x < y) {
        int tmp = x;
        x = y;
        y = tmp;
    }

    //기존 숫자 저장용
    int a = x;
    int b = y;

    
    //유클리드 호제법
    while(y != 0){

        int r = x % y;
        x = y;
        y = r; 
    }

    int gcd = x;
    int lcm = a*b/gcd;

    cout << gcd<< '\n' << lcm << endl;
    return 0;
}