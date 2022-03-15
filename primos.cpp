#include <iostream>
using namespace std;
int main() {
    int x,y=1,z,entrada,pula=0;
    
  cin >> entrada;  
  for (x=1;x<entrada;x++){
      for (y=x; y>0; y--){
        if(x%y == 0){
            z++;
        }
      } 
     if (z<3){
         cout << x << '\t';
         pula++;
         if(pula == 8){
             cout << endl;
             pula =0;
         }
     }
      z =0;
  }
  cout << '\n';
 return 0;   
}
