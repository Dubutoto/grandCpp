#include <iostream>
#include <vector>

using namespace std; 

struct Person {
    int age;
    string name;
    int index;
};

bool customCompare(const Person& a, const Person& b){
    return a.age < b.age;
}

int main(){
    int N;
    cin >> N;

    vector<Person> v;
    v.reserve(N);

    for(int i = 0; i < N; i++){
        int age;
        string name;

        cin >> age >> name;
        v.push_back({age, name, i});
    }

    stable_sort(v.begin(),v.end(),customCompare);

    for(const Person& p: v){
        cout << p.age << " " << p.name << '\n';
    }

    return 0;
}