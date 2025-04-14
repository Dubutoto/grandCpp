#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    int N;
    cin >> N;

    vector<int> v(N);

    for(int i = 0; i < N; i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    for(const int& s : v){
        cout << s << '\n';
    }
    
    return 0;
}