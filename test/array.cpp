#include <iostream>

using namespace std;

int main(){
    int a = 1;
    auto b = 2;
    int c = 3;

    // 배열 선언
    int my_array[3] = {1, 2, 3};

    cout << my_array[0] << " " << my_array[1] << endl;
    
    // 문자열은 기본적으로 문자의 배열
    // 총 13글자이지만 마지막에 Null Character 들어가있음 \0 .
    char name[14] = "Hello, World!";

    //배열에 바로 데이터 넣는 경우 초깃값 생략 가능
    char namex[] = "Hello, World!";

    // C++ 는 Null 포인터: \0가 나올때까지 출력한다.
    cout << name << " " << sizeof(name) << endl;
}