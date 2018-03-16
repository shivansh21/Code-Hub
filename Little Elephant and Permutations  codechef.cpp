#include<iostream>

using namespace std;

bool goodPerm(int a[], int p){
	// find number of pairs
	// 0<=i<j<p and a[i]>a[j]
	// ---inversion---
	// no of integer i such that 1<=i<p and a[i]>a[i+1]
	// local inversion
	if(p==1){
		return true;
	}
	int count = 0, v = 0;
	for(int i=0;i<p;i++){
		for(int j=i+1;j<p;j++){
			if((i>=0 && i<j && j<p && a[i]>a[j])){
				count++;
			}
		}	
	}
	for(int i=0;i<p-1;i++){
		if(i>=0 && i<p && a[i]>a[i+1]){
			v++;
		}
	}
	if(count==v){
		//cout<<count<<endl<<v<<endl;
		return true;
	}
	return false;
	
}
int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int P;
		cin>>P;
		int *A = new int[P];
		for(int j=0;j<P;j++){
			cin>>A[j];
		}
		bool res = goodPerm(A,P);
		if(res) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
}
