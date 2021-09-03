#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sol(int n,int k){
    if(n == 1)
        return 1;
    return (sol(n - 1, k) + k - 1) % n + 1;
}

int main() {
    int n,k;
    cin >> n >>k;
    cout << sol(n,k);
    return 0;
}
