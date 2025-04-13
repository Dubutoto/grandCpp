#include <iostream>

using namespace std;

struct MyStruct{
    int first;
    int second;
    // ... 추가 기능

    int Sum()
    {
        return first + second;
    }
};

int main() 
{
   
    MyStruct a;
    // . : Member Operator 구조체 내부의 변수에 접근.
    a.first = 123;
    a.second = 456;

    cout << sizeof(a) << endl;
    cout << a.Sum() << endl;

    // Pointer 를 이용해서 접근 가능
    MyStruct *ptr_a = &a;

    ptr_a -> first = 125;
    cout << ptr_a -> first << ptr_a -> second << " " << ptr_a -> Sum() << endl;

    return 0;
}