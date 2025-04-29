#include <iostream>
#include <vector>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    cin >> N;
    string io = "";

    for(int i = 0; i < N + 1; i++){
        io += "IO";
    }
    io.pop_back();

    long long S;
    cin >> S;
    string str;
    cin >> str;

    size_t pos = 0;
    long long answer = 0;
    while((pos = str.find(io,pos)) != string::npos){
        answer++;
        pos++;
    }

    cout << answer << '\n';
    return 0;
}