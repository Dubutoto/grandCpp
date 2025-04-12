#include <iostream>

using namespace std;

int main(){ 

    // 형변환
    // double 을 int 로 강제 형변환해서 대입 시킴.
    int i;
    i = 987.654;
    
    // i = 987;
    
    //Boolean
    bool is_good = false;
    // true, false 로 출력하려면 boolalpha -> 이후에 계속 적용됨
    // 숫자로 출력하려면 noboolalpha -> 이후에 계속 적용됨
    cout << boolalpha << is_good << endl;

    {
        // 영역 따로 설정해서 동일한 변수명 설정 가능
        // 여기서 선언한 변수는 영역내에서만 유효.
        // 여기서 정의한게 없는 변수는 밖에서 가져옴.
        
        int is_good = 1;
        
    }

}
