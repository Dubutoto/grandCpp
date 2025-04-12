#include <iostream>

using namespace std;

int main(){

    cout << "Hello, World" << endl;

    char user_input[100];
    int i = 123;
    i = 332;

    cin >> user_input;
    cout << sizeof(123 + 4) << endl;

    //sizeof() : 변수나 자료형의 길이, 크기

    //float 4바이트 뒤에 f 붙여야함
    float f = 123.456f;

    //double은 8바이트
    double d = 123.456;

    // 단일 문자 ''
    char c = 'a';

    // C++ 은 문자열 배열로써의 문자열.
    // std::string 사용할수 있음
    char str[] = "Hello, World!"; 



    return 0;
}