#include <iostream>

using namespace std;

int main() // entry point
{
    int number;

    
    cin >> number;
    /*

    if(number % 2 == 0){
        cout << "짝수입니다. \n";     
    }else{
        cout << "홀수입니다." << endl;
    }
    */

    //조건 연산자 (삼항 연산자)
    cout << (number % 2 == 0 ? "짝수입니다." : "홀수입니다.") << endl;

    
    // switch - case

    switch(number)
    {
        case 0:
            cout << "정수 0입니다." << endl;
            break; // 생략하면 이후 케이스 전부 실행된다.
          
    }

    return 0;
}
