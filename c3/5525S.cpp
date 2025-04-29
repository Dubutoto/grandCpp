#include <iostream>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    string str;
    cin >> str;

    int count = 0;
    int answer = 0;

    for(int i = 1; i < M - 1; i++){
        if(str[i - 1] == 'I' && str[i] == 'O' && str[i + 1] == 'I'){
            count++;
            if(count == N){
                answer++;
                count--;
            }
            i++;
        }else{
            count = 0;
        }
    }

    cout << answer << '\n';

    return 0;
}