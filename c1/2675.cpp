#include <iostream>

using namespace std; 

int main(){
    int n;
    cin >> n;

    int r;
    string x;

    for(int i = 0; i < n; i++){
        cin >> r >> x;

        for(int j = 0; j < x.length(); j++){
            for(int k = 0; k < r; k++){
                cout << x[j];
            }
        }
        cout << '\n';
    }
    return 0;
}