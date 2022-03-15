#include <iostream>
#include <ctime>
#include <string>
#include <unistd.h>
#include <stdlib.h>
using namespace std;



int main(){

        string time1,comando,hora;      
        const string quote = "\"";
        const string space = " ";
        
        for (;;){
           sleep(1);
           hora = "";
           std::time_t result = std::time(nullptr);
           time1 = asctime(std::localtime(&result));
           for (int i=11;i<19;i++){
               hora += time1[i];
           }
           
           comando = "echo" + space + quote + hora +  quote;
           
           
           const char *c = comando.c_str();
           cout << '\r' <<hora;
           //system("cls");
           //system(c);
           
           
        }           
        
        return 0;
}
