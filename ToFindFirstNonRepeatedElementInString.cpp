// write an efficient function to find the first nonrepeated character in a string. Eg. "teeter" -> 'r'
// @ author - Shivansh Sharma

    #include<iostream>
    #include<vector>
    #include<string>
    using namespace std;

    char nonrepeat(string s1){
      // your code goes here
      vector<int> freq(26,0);
      for(int i:s1){++freq[i-'a'];}
      for(int i:s1){
        if(freq[i-'a']==1){
          return (i);
        }
      }
    }

    int main()
    {
      string s;
      getline(cin,s);
      cout<<nonrepeat(s);
      return 0;
    }
