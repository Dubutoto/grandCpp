#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    vector<int> original(N);
    for(int i = 0; i < N; i++){
        cin >> original[i];
    }

    vector<int> sorted(original.begin(),original.end());
    sort(sorted.begin(), sorted.end());
    sorted.erase(unique(sorted.begin(),sorted.end()), sorted.end());

    map<int, int> m;

    for(int i = 0; i < sorted.size(); i++){
        m[sorted[i]] = i;
    }

    for(int i = 0; i < N; i++){
        cout << m[original[i]] << " ";
    }
    cout << '\n';
    return 0;
}