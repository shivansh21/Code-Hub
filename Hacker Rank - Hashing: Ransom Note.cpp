// Problem Link : https://www.hackerrank.com/challenges/ctci-ransom-note/problem
// @ author - Shivansh Sharma

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool ransom_note(vector<string> magazine, vector<string> ransom) {
  int index;
  vector <string> words[11];
  for(string i:magazine){
      index = ((i.length())*(int)i[0])%11;
      words[index].push_back(i);
  }
  int flag;
  for(string i:ransom){
    flag=0;
    index = ((i.length())*(int)i[0])%11;;
    for(long int j=0;j<words[index].size();j++){
      if(words[index][j]==i){
          flag=1;
          words[index][j]="#####";
          break;
      }   
    }
    if(flag==0) return false;
  }
  return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
