#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string v;
    cin >> v;
    stringstream ss(v);
    string temp;
    vector<string> vec;

    while(getline(ss,temp,'-')){
        vec.push_back(temp);
    };

    int result = 0;

    for(int i = 0; i < vec.size(); i++){
        stringstream inner(vec[i]);
        string num;
        int partSum = 0;

        while(getline(inner, num, '+')){
            partSum += stoi(num);
        }

        if(i == 0) {
            result += partSum;
        }else{
            result -= partSum;
        }
    }

    cout << result << '\n';
    
    return 0;
}