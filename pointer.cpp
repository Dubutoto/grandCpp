#include <iostream>

using namespace std;

int main(){
    int a = 123;

    cout << a << " " << &a << endl;

    int* b = &a;

    // deference operator(역참조 연산자)
    cout << b << " " << *b << endl;

    *b = 567;

    cout << a << " " << b << " " << *b << endl;

}