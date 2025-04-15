#include <iostream>
#include <string>

using namespace std; 

int main(){
    int N;
    cin >> N;

    int count = 0;
    int num = 665;

    while(count < N){
        if(to_string(num).find("666") != string::npos){
            count++;
        }
        num++;
    }

    cout << num - 1 << '\n';

    return 0;
}