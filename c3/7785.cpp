#include <iostream>
#include <set>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    set<string, greater<>> s;
    while(N--){
        string x, y;
        cin >> x >> y;

        if(y == "enter"){
            s.insert(x);
        }else{
            s.erase(x);
        }
    }

    for(string x: s){
        cout << x << '\n';
    }

    return 0;
}