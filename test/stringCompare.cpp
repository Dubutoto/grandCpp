#include <iostream>
#include <cstring>

using namespace std;

const int kMaxStr = 100;


// 문자열 비교 But C 와 C++ 스타일 혼합

bool IsEqual(const char *str1, const char *str2){

    int len = strlen(str1);

    for(int i = 0; i < len; i++){
        if(str1[i] != str2[i]){
            return false;        
        }
    }

    return true;
}


int main(){

    const char str1[kMaxStr] = "stop";

    while(1){
        char str2[kMaxStr];
        cin >> str2;
        
        if(IsEqual(str1, str2)){
            cout << "같습니다. 종료합니다." << endl;
            break;
        }else{
            cout << "같지 않습니다. 계속합니다." << endl;
        }
    }
    return 0;
}