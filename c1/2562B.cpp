#include <iostream>
#include <array>
#include <algorithm>

using namespace std; 

int main(){

    array<int, 9> arr;

    for(int i = 0; i < arr.size(); i++){
        cin >> arr[i];
    }

    auto maxIt = max_element(arr.begin(), arr.end());
    int maxVal = *maxIt;
    int index = distance(arr.begin(), maxIt) + 1;
  

    cout << maxVal << '\n' << index << endl; 
    return 0;
}