#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

int main(){

  int N;
  cin >> N;

  vector<int> v(N);
  
  for(int i = 0; i < N; i++){
    cin >> v[i];
  }

  int M = *max_element(v.begin(), v.end());

  double sum = 0;
  for(int i = 0; i < N; i++){
    // 정수 나눗셈시 
    double scaled = (double)v[i]/M * 100;
    sum += scaled; 
  }

  cout << sum/N << endl;  

    return 0;
}