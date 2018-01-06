/* Given an array of 'n' integers and a number,'d', perform 'd' left rotations on the array. Then print the updated array as a 
single line of space-separated integers.

A left rotation operation on an array of size 'n' shifts each of the array's elements 1 unit to the left. For example, 
if 2 left rotations are performed on array [1,2,3,4,5], then the array would become [3,4,5,1,2] . */

// @ author - Shivansh Sharma

#include<iostream>
#include<vector>
using namespace std;

vector<int> array_left_rotation(vector<int> a, int n, int k) {
   int new_index;
    vector <int> new_array(n);
    for(int i=0;i<n;i++){
      // Logic goes here:
        new_index = (i + k)%n;
        new_array[i] = a[new_index];
    }
    return new_array;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}
