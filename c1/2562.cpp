#include <iostream>
#include <array>

using namespace std; 

int main(){
    array<int, 9> arr;

    for(int i = 0; i < arr.size(); i++){
        cin >> arr[i];
    }

    int maxVal = arr[0];
    int index = 1;

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
            index = i + 1;
        }
    }

    cout << maxVal << endl;
    cout << index << endl;

    return 0;
}