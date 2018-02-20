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
      int flag=1;
      for(int i = 0; i<=m; i++){
        if(P[i]!=T[i+shift]){
          flag = 0;
          break;
        }		
      }
      // checking flag
    if(flag==1){
        cout<<"Pattern Match in Shift : "<<s+1<<endl;
     }
   }
    return 0;
  }

// complexity -- (n-m)*m
