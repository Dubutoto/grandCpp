#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

struct Axis{
    int x;
    int y;
};

bool customCompare(const Axis& a, const Axis& b){
    if(a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}

int main(){

    int N;
    cin >> N;

    vector<Axis> v;

    for(int i = 0; i < N; i++){
        int xAxis;
        int yAxis;
        cin >> xAxis >> yAxis;
        // 구조체 데이터 삽입 형식 유의.
        v.push_back({xAxis,yAxis});
    }

    sort(v.begin(), v.end(), customCompare);
    
    for(const Axis& s : v){
        cout << s.x << " " << s.y << '\n';
    }
    return 0;
}