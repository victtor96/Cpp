#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
string texto,troca;
char recebe;
int i=0,x,j=0,w=0,tam;

ifstream entrada("C:/Users/victo/Desktop/NCFEED.txt");
ofstream saida("Limpo.txt");
string palavra1 = "<enclosure url=\"";
string palavra2 = "\" length=";


tam = palavra1.length();

while(entrada.get(recebe)){
    troca = recebe;
    texto += troca;
}

while (true){
  i = texto.find(palavra1,i+1);
  j = texto.find(palavra2,j+1);
  w++;
    for (x=tam+i; x<j; x++){
      saida << texto[x];
  }
  saida << endl;
  if (i==-1){break;}

}
saida.close();
return 0;



}