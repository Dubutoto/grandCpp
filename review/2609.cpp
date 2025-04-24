#include <iostream>
#include <vector>

using namespace std;

int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y;
    cin >> x >> y;

    int g, l;
    if(x > y){
        g = gcd(x,y);
    }else{
        g = gcd(y,x);
    }
    l = x*y/g;

    cout << g << '\n' << l << '\n';

    return 0;
}