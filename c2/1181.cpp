#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

 bool CustomCompare(const string& a, const string& b){
    if(a.length() != b.length()){
        return a.length() < b.length();
    }
    return a < b;
 }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    
    cin >> N;
    vector<string> v(N);

    for(int i = 0; i < N; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end(), CustomCompare);
    v.erase(unique(v.begin(),v.end()),v.end());
    for(const string& s: v){
        cout << s << '\n';
    }
    
    return 0;
}