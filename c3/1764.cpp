#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    unordered_set<string> name;
    vector<string> answer;

    cin >> N >> M;
  
    for(int i = 0; i < (N+M); i++){
        string tmp;
        cin >> tmp;

        auto result = name.insert(tmp);

        if(!result.second){
            answer.push_back(tmp);
        }
    }

    sort(answer.begin(),answer.end());
    cout << answer.size() << '\n';
    for(string s: answer){
        cout << s << '\n';
    }

    return 0;
}