#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    int count = 0;

    for (int i = 5; i <= N; i = i * 5){
        count = count + N/i;
    }

    cout << count << '\n';

   return 0;
}