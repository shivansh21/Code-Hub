// C++ program to demonstrate various function string class
// @ author - Shivansh Sharma

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // various constructor of string class
 
    // initialization by raw string
    string str1("first string");
 
    // initialization by another string
    string str2(str1);
 
    // initialization by character with number of occurence
    string str3(5, '#');
 
    // initialization by part of another string
    string str4(str1, 6, 6); // from 6th index (second parameter)
                             // 6 characters (third parameter)
 
    // initialization by part of another string : iteartor version
    string str5(str2.begin(), str2.begin() + 5);
 
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << str4 << endl;
    cout << str5 << endl;
 
    //  assignment operator
    string str6 = str4;
 
    // clear function deletes all character from string
    str4.clear();
 
    //  both size() and length() return length of string and
    //  they work as synonyms
    int len = str6.length(); // Same as "len = str6.size();"
 
    cout << "Length of string is : " << len << endl;
 
    // a particular character can be accessed using at /
    // [] operator
    char ch = str6.at(2); //  Same as "ch = str6[2];"
 
 
    cout << "third character of string is : " << ch << endl;
 
    //  front return first character and back returns last charcter
    //  of string
 
    char ch_f = str6.front();  // Same as "ch_f = str6[0];"  ==> will work in c++11 or above
    char ch_b = str6.back();   // Same as below             ==> will work in c++11 or above
                               // "ch_b = str6[str6.length() - 1];"
 
    cout << "First char is : " << ch_f << ", Last char is : "<< ch_b << endl;
 
    // c_str returns null terminated char array version of string
    const char* charstr = str6.c_str();
    printf("%s\n", charstr);
 
    // append add the argument string at the end
    str6.append(" extension");
    //  same as str6 += " extension"
 
    // another version of appends, which appends part of other
    // string
    str4.append(str6, 0, 6);  // at 0th position 6 character
 
    cout << str6 << endl;
    cout << str4 << endl;
 
    //  find returns index where pattern is found.
    //  If pattern is not there it returns predefined
    //  constant npos whose value is -1
 
    if (str6.find(str4) != string::npos)
        cout << "str4 found in str6 at " << str6.find(str4)
             << " pos" << endl;
    else
        cout << "str4 not found in str6" << endl;
 
    //  substr(a, b) function returns a substring of b length
    //  starting from index a
    cout << str6.substr(7, 3) << endl;
 
    //  if second argument is not passed, string till end is
    // taken as substring
    cout << str6.substr(7) << endl;
 
    //  erase(a, b) deletes b character at index a
    str6.erase(7, 4);
    cout << str6 << endl;
 
    //  iterator version of erase
    str6.erase(str6.begin() + 5, str6.end() - 3);
    cout << str6 << endl;
 
    str6 = "This is a examples";
 
    //  replace(a, b, str)  replaces b character from a index by str
    str6.replace(2, 7, "ese are test");
 
    cout << str6 << endl;
    
    // C++ code to demonstrate the working of
// begin(), end(), rbegin(), rend()
     // Initializing string`
    string str = "geeksforgeeks";
 
    // Declaring iterator
    std::string::iterator it;
 
    // Declaring reverse iterator
    std::string::reverse_iterator it1;
 
    // Displaying string
    cout << "The string using forward iterators is : ";
    for (it=str.begin(); it!=str.end(); it++)
    cout << *it;
    cout << endl;
 
    // Displaying reverse string
    cout << "The reverse string using reverse iterators is : ";
    for (it1=str.rbegin(); it1!=str.rend(); it1++)
    cout << *it1;
    cout << endl;
    
    // C++ code to demonstrate the working of
// getline(), push_back() and pop_back()
	// Declaring string
    
 
    // Taking string input using getline()
    // "geeksforgeek" in givin output
    getline(cin,str);
 
    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;
 
    // Using push_back() to insert a character
    // at end
    // pushes 's' in this case
    str.push_back('s');
 
    // Displaying string
    cout << "The string after push_back operation is : ";
    cout << str << endl;
 
    // Using pop_back() to delete a character from end pops 's' in this case
      str.pop_back()      //  ====> for version c++11 and above
 
    // Displaying string
    cout << "The string after pop_back operation is : "<<str<< endl;
    return 0;
}
