#include <iostream>
#include <array>

using namespace std; 

int main(){

    //조건 입력
    int n;
    array<int, 6> arr;
    int t, p;

    cin >> n;
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
    }
    cin >> t >> p;

    int totalT = 0;

    for(int i = 0; i < 6; i++){
        totalT = totalT + (arr[i] + t - 1)/ t;
    }

    int totalP = n / p; //한줄 처리
    int sepaP = n % p; //한줄 처리

    cout << totalT << '\n'; 
    cout << totalP << " " << sepaP << endl;

    return 0;
}