#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string B;
    int N;
    cin >> B >> N;

    int result = 0;
    int power = 1;

    for(int i = B.size() -1; i >= 0; i--){
        char c = B[i];
        int num;

        if('0' <= c && c <= '9'){
            num = c - '0';
        } else {
            num = c - 'A' + 10;
        }

        result += num * power;
        power *= N;
    }
    
    cout << result << '\n';
     
    return 0;
}