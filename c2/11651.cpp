#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

struct Axis{
    int x;
    int y;
};

bool customSort(const Axis& a, const Axis& b){
    if(a.y == b.y) return a.x < b.x;

    return a.y < b.y;
}

int main(){
    int N;
    cin >> N;

    vector<Axis> v;

    for(int i = 0; i < N; i++){
        int x;
        int y;
        cin >> x >> y;
        v.push_back({x,y});
    }

    sort(v.begin(), v.end(), customSort);
    
    for(const Axis& c: v){
        cout << c.x << " " << c.y << "\n";
    }

    return 0;
}