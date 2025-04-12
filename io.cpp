#include <iostream>

using namespace std;

int main(){

    // cin은 데이터를 흘려넣어 보내는 스트림
    // 그 데이터를 해석하는 것은 자료형
    // 자료형에 따라서 알아서 처리해주기 때문에 scanf()보다 편리

    char user_input[100];

    // cin과 getline 의 차이?

    cout << "원하는 문자를 입력해주세요" << endl;
    cout << "입력: ";

    //extraction operator
    // cin 은 공백있으면 뒤에꺼 안받아옴
    // cin >> user_input;

    // 만약 전체를 다 받아오고 싶다?
    // cin.getline() 사용.
    // cin.getline(받아온것을 저장할 자료형의 이름, 자료형의 최대 크기)
    // 빈칸도 입력으로 처리함. 줄바꿈을 만날때 까지 입력 받는다.
    // 문자 배열에만 입력 받음

    cin.getline(user_input, sizeof(user_input));

    cout << "메아리: " << user_input << endl ;


    //숫자 두개 입력 받는 경우
    int number = -1;
    int number2 = -1;

    cin >> number;
    cin >> number2;

    cout << number << " " << number2 << endl;

    //최대 100글까지 입력 받아서 무시하겠다.
    // 또는 \n 이 있으면 즉, 줄바꿈이 있으면 그때부터 무시하겠다.
    //cin.ignore(100, \n);
    // 임의로 100넣었지만 개발시
    // numeric_limits<streamsize>::max()

    return 0;
}