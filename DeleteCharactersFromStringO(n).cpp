// write an effcient program that deletes characters from an ASCII string. 
// @ author - Shivansh Sharma

    #include<iostream>
    #include<vector>
    #include<string>
    using namespace std;

    string removeChars(string str, string remove){
      // Your code goes here
      int n=0;
      vector<bool> v(128,false);
      for(int i:remove){
        v[i] = true;
      }
      for(int i:str){
        if(v[i]!=true){
          str[n] = i;
          n++;
        }
      }
      return str.substr(0,n);
    }

    int main(){
      string s1,s2;
      getline(cin,s1);
      getline(cin,s2);
      cout<<removeChars(s1,s2);
      return 0;
    }
