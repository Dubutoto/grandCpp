#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    int m_index = static_cast<int>(round(N * 0.15));
    vector<int> v;


    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        v.emplace_back(x);
    }

    //정렬!!
    sort(v.begin(),v.end());

    vector<int> sliced(v.begin() + m_index, v.end() - m_index);

    int sum = accumulate(sliced.begin(),sliced.end(),0);

    double avg = (double)sum/sliced.size();
    int answer = static_cast<int>(round(avg));

    cout << answer << '\n';

    return 0;
}