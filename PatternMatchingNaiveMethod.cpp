// Pattern Matching -- NAIVE METHOD

  #include<iostream>
  #include<string>
  using namespace std;
  
  int main(){
    string T,P;
    cout<<"Enter Text: ";
    getline(cin,T);
    int n = T.length();
    cout<<endl<<"Enter Pattern: ";
    getline(cin,P);
    int m = P.length();
    
    int shift;
    for(shift=0; shift<=n-m; shift++){
      int flag=1,index_of_pattern=0;
      for(int i = shift; i<=shift+m-1; i++){
        if(P[index_of_pattern]!=T[i]){
          flag = 0;
          break;
        }	
        index_of_pattern++;	
      }
      // checking flag
    if(flag==1){
        cout<<"Pattern Match in Shift : "<<s+1<<endl;
     }
   }
    return 0;
  }
