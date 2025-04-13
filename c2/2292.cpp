#include <iostream>

using namespace std; 

int main(){

    int n;
    cin >> n;

    int x;

    int room = 1;
    int dis = 1;

    while (n > room){
        room = room + 6 * dis;
        dis++;
    }
    
    cout << dis << endl;
  
    return 0;
}