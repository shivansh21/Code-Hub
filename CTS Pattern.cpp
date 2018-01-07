/* Pattern Question in CTS Mock COding Round:-
************************
***********  ***********
**********    **********
*********      *********
********        ********
*******          *******
******            ******
*****              *****
****                ****
***                  ***
**                    **
*                      *
**                    **
***                  ***
****                ****
*****              *****
******            ******
*******          *******
********        ********
*********      *********
**********    **********
***********  ***********
************************ 
@ author - Shivansh Sharma
*/

#include <iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
 int n;
 cin>>n;
 for(int i=0;i<n;i++){
  for(int j=0;j<n-i;j++){
    cout<<"*";
  }
  for(int k=0;k<i;k++){
  	cout<<"  ";
  }
  for(int m=0;m<n-i;m++){
    cout<<"*";
  }
  cout<<endl;
 }
 
  for(int i=0;i<n-1;i++){
  for(int j=0;j<i+2;j++){
    cout<<"*";
  }
  for(int k=0;k<n-i-2;k++){
  	cout<<"  ";
  }
  for(int m=0;m<i+2;m++){
    cout<<"*";
  }
  cout<<endl;
 }
 return 0;
 }
 
 
