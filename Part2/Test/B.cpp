#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> input(){
    int size;
    cin >> size;
    vector<int>num;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        num.push_back(a);
    }
    return num;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int>num1,num2,answer;
    num1 = input();
    num2 = input();
    answer = num1;
    for(int i = 0; i < num2.size(); i++){
        answer.push_back(num2[i]);
    }
    sort(answer.begin(),answer.end());
    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << " ";
    }
    return 0;
}