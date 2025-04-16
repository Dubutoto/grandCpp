#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> v;
    map<int, int> m;
    int avg = 0;
    int mid = 0;
    int range = 0;

    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        v.push_back(x);
        m[x]++;
    }

    avg = round((double)accumulate(v.begin(), v.end(), 0)/N);

    if (avg == -0) avg = 0;

    sort(v.begin(),v.end());
    mid = v[v.size()/2];
    range = *max_element(v.begin(),v.end()) - *min_element(v.begin(),v.end());


    int maxFreq = 0;
    for (auto& p: m){
        maxFreq = max(maxFreq,p.second);
    }

    vector<int> list;

    for (auto& p: m){
        if(p.second == maxFreq){
            list.push_back(p.first);
        }
    }

    sort(list.begin(), list.end());

    cout << avg << '\n';
    cout << mid << '\n';
    if(list.size() >= 2){
        cout << list[1] << '\n';
    }else{
        cout << list[0] << '\n';
    }
    cout << range << '\n';
  
    return 0;
}