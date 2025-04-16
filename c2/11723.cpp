#include <iostream>
#include <set>
#include <sstream>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    set<int> s;

    int N;
    cin >> N;

    ostringstream output;

    while(N--){
        string cmd;
        cin >> cmd;

        ostringstream output;

        if(cmd == "add"){
            int x;
            cin >> x;
            s.insert(x);
        }else if(cmd == "remove"){
            int x;
            cin >> x;
            s.erase(x);
        }else if(cmd == "check"){
            int x;
            cin >> x;
            output += (s.count(x) ? "1\n" : "0\n"); 
        }else if(cmd == "toggle"){
            int x;
            cin >> x;
            if(s.count(x)){
                s.erase(x);
            }else{
                s.insert(x);
            }
        }else if(cmd == "empty"){
            s.clear();
        }else if(cmd == "all"){
            s.clear();
            for(int i = 1; i <= 20; i++){
                s.insert(i);
            }
        }
    }

    cout << output.str();
    return 0;
}