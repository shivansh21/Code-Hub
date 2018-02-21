// Rabin-Karp String Pattern Matching
// author - Shivansh Sharma

#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
	string T,P;
	cout<<"Enter the text: ";
	getline(cin,T);
	cout<<endl<<"Enter the pattern: ";
	getline(cin,P);
	
	// finding the length of both strings:
	int n = T.length();
	int m = P.length();
	
	// code starts here
	// we find hash value for pattern first;
	int H_pattern = 0;
	for(int i=0; i<m; i++){
		H_pattern += (int(P[i]) - int('a') + 1) * pow(3,i);
	}
	
	// Matching text hash values to H_pattern
	int H_text = 0;
	for(int i=0; i<m; i++){
		H_text += (int(T[i]) - int('a') + 1) * pow(3,i);
	}	
	
	// setting flag to 1
	int flag = 1, j;
	if(H_text == H_pattern){
		for(j=0; j<m; j++){	
			if(P[j] != T[j]){
				flag = 0;
				break;
			}
		}
		if(flag==1){
			cout<<"Pattern occurs at index: "<<0<<endl;
		}
		
	}
	for(int i=0; i<n-m; i++){
		H_text = H_text - (int(T[i])-int('a')+1);
		H_text = H_text/3;
		H_text = H_text + ((int(T[i+m])-int('a')+1)*pow(3,(m-1)));
		flag = 1;
		if(H_text == H_pattern){
			for(j=0; j<m; j++){	
				if(P[j] != T[j+i+1]){
					flag = 0;
					break;
				}
			}
			if(flag==1){
				cout<<"Pattern occurs at index: "<<i+1<<endl;
			}
			
		}
	}
	
	return 0;
}

