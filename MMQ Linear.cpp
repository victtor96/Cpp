#include <iostream>
using namespace std;


int main(){

float x[] = {-50  ,-20  ,10   ,70   ,100  ,120} ;
float y[] = {0.125,0.128,0.134,0.144,0.150,0.155};

int n = sizeof x/sizeof x[0];

float D[10];
float soma_D;
float soma_x,soma_x2, soma_y,soma_xy,a,b;
int i;

soma_x  = 0;
soma_x2 = 0;
soma_y  = 0;
soma_xy = 0;

for (i = 0;i<n;i++){
    soma_x += x[i];}
    cout << "\nsoma x = "<< soma_x;


for (i = 0; i<n;i++){
    soma_y += y[i];}
    cout << "\nsoma y = "<< soma_y;


for(i = 0;i<n;i++){
   soma_x2 += x[i]*x[i];}
   cout << "\nsoma x^2 = "<< soma_x2;



for(i = 0;i<n;i++){
   soma_xy += x[i]*y[i];}
   cout << "\nsoma x*y = "<< soma_xy<<"\n";


cout << soma_x << " " << soma_x2 << " " <<soma_y << " " << soma_xy << "\n" ;




a = ((n * soma_xy) - (soma_x*soma_y))/((n*soma_x2) - (soma_x*soma_x));
b = (soma_y - (a*soma_x))/n; 

cout << "y = "<< a << "*x + "<< b<<"\n";
for(int j=0;j<n;j++){
    D[j]= (x[j]*a)+(b);
    cout << 'x' <<" = " << x[j] <<'\t' <<"y = "<<D[j]<< "\n";   
}

for(i = 0;i<n;i++){
cout << "y "<<" - "<<"F(x"<<i <<") => "<< y[i] <<" - " << D[i] << " = "<< (y[i]-D[i]);
cout << "\n";
}


for(i = 0;i<n;i++){
soma_D += (y[i]-D[i])*(y[i]-D[i]) ;
//cout << (y[i]-D[i]) <<"\n";


//cout << "\n"<< "Erro: "<< soma_D << "\n";

}

cout << "\n"<< "Erro: "<< soma_D << "\n";



    return 0;
}

