#include <iostream>
#include <array>
#include <algorithm>

using namespace std; 
    
int main(){

    array<int, 3> arr; 
    
    while(true){
        cin >> arr[0] >> arr[1] >> arr[2];

        if (arr[0] == 0 && arr[1] == 0 && arr[2] ==0){
            break;
        }

        sort(arr.begin(), arr.end());

        if (arr[0]*arr[0]+arr[1]*arr[1] == arr[2]*arr[2]){
            cout << "right" << '\n';
        }else{
            cout << "wrong" << '\n';
        }
    }
    return 0;
}