// @ author - Shivansh Sharma
// Given an array, print k largest elements from the array.  The output elements should be printed in decreasing order - AMAZON

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    int T, N, K;  //T=test cases, N= Size of array, K= largest element to be returned
    cin>>T;       //testcases
    int temp;
    vector <int> v, res;
    
  for(int t=0;t<T;t++){
    cin>>N>>K;       // input size and k largest number to be returned
    for(int i=0;i<N;i++){
        cin>>temp;
        v.push_back(temp);
    }
    
// First we will sort the array in ascensing order (default) using STL.
    
    sort(v.begin(),v.end());
    
// Store the last element from vector v to the beginning of vector 'res' and then delete it from the parent vector.
    for(int i=0;i<K;i++){
        res.push_back(v.back());
        v.pop_back();
    }
    
  // Showing output
    vector <int> :: iterator j;
    for(j=res.begin();j!=res.end();j++){
        cout<<*j<<" ";
    }
  // Clear the vectors to remove buffers-
    v.clear();
    res.clear();
    
    cout<<endl;
  }
    return 0;
}
