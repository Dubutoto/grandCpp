#include <iostream>
#include <unordered_map>
#include <string>  
#include <cctype>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    unordered_map<int,string> is(N + 1);
    unordered_map<string,int> si(N + 1);

    for(int i = 1; i <= N; i++){
        string x;
        cin >> x;
        is[i] = x;
        si[x] = i;
    }

    while(M--){
        string x;
        cin >> x;

        if(isdigit(x[0])){
            int y = stoi(x);
            cout << is[y] << '\n'; 
        }else{
            cout << si[x] << '\n';
        }

    }
    return 0;
}