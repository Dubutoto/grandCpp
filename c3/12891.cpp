#include <iostream>
#include <vector>

using namespace std;

int check[4];
int current[4];

int toIndex(char c){
    if(c == 'A') return 0;
    if(c == 'C') return 1;
    if(c == 'G') return 2;
    return 3;
}

bool isValid(){
    for(int i = 0; i < 4; i++){
        if(current[i] < check[i]) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int S, P;
    cin >> S >> P;

    string ch = "";
    cin >> ch;

    for(int i = 0; i < 4; i++){
        cin >> check[i];
    }

    int count = 0;
    int right = 0;
    int left = 0;

    while(right < S){
        current[toIndex(ch[right])]++;

        if(right - left + 1 > P){
            current[toIndex(ch[left])]--;
            left++;
        }

        if(right - left + 1 == P){
            if(isValid() == true) count++;
        }

        right++;
    }

    cout << count << '\n';
    
    return 0;
}