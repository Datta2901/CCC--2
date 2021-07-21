#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  string str;
  cin >> str;

  map<char, int> freq,answer;
  for (char c : str) {
    freq[c]++;
  }

  for (auto it : freq) {
    answer[it.second]++;
  }

  if(answer.size() <= 1){
    cout << "YES";
  }else if (answer.size() > 2){
    cout << "NO";
  }else{
    int count = 1;
    pair<int,int>one,sec;
    for(auto i : answer){
      if(count == 1){
          one = i;
          count++;
      }else{
        sec = i;
      }
    }
    if (((one.first == 1 && one.second == 1) || (sec.first == 1 && sec.second == 1)) || ((one.second == 1 || sec.second == 1) &&(abs(one.first - sec.first) == 1))) {
      cout << "YES";
    } else{
      cout << "NO"; 
    }
  }

  return 0;
}