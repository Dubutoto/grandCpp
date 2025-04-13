#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxVal = *max_element(arr.begin(), arr.end());
    int minVal = *min_element(arr.begin(), arr.end());

    cout << minVal << " " << maxVal << endl;

    return 0;
}