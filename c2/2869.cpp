#include <iostream>

using namespace std; 

int main(){

    int A, B, V;

    cin >> A >> B >> V;

    //     올라가야할 높이 / 하루에 올라가는 총 높이
    //    (마지막 날에는 미끄러지지 않기 때문에 - B 해주는것)
    // 올림 처리를 위해 분모를 더하고 -1 해줌
    int days = ((V - B) + (A - B) - 1)/ (A - B);



    cout << days << '\n';

    return 0;
}