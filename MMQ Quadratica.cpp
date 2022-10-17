#include <iostream>
using namespace std;

float matrixD(float x[4][4]);







int main(){

float x[] = {-50,-20,10,70,100,120} ;
float y[] = {0.125,0.128,0.134,0.144,0.150,0.155};

float n = sizeof x/sizeof x[0];
float determinante_a, determinante_b,determinante_c,determinante_Cra,D[10],soma_D;



float soma_x,soma_x2,soma_x3,soma_x4, soma_y,soma_xy,soma_x2y,a,b,x1,x2,x3;
int i;
soma_D = 0;


soma_x  = 0;
soma_x2 = 0;
soma_x3 = 0;
soma_x4 = 0;
soma_y  = 0;
soma_xy = 0;
soma_x2y = 0;


for (i = 0;i<n;i++){
    soma_x += x[i];
}
cout << "soma x = " << soma_x<< '\n';
for (i = 0; i<n;i++){
    soma_y += y[i];
}
cout << "soma y = " << soma_y<< '\n';
for(i = 0;i<n;i++){
   soma_x2 += x[i]*x[i];
}
cout << "soma x2 = " << soma_x2<< '\n';
for(i = 0;i<n;i++){
   soma_x3 += x[i]*x[i]*x[i];
}
cout << "soma x3 = " << soma_x3<< '\n';
for(i = 0;i<n;i++){
   soma_x4 += x[i]*x[i]*x[i]*x[i];
}
cout << "soma x4 = " << soma_x4<< '\n';
for(i = 0;i<n;i++){
   soma_xy += x[i]*y[i];
}
cout << "soma xy = " << soma_xy<< '\n';
for(i = 0;i<n;i++){
   soma_x2y += x[i]*x[i]*y[i];
}
cout << "soma x2y = " << soma_x2y<< '\n';





float matrixDeter[4][4] = {{soma_x4,soma_x3,soma_x2},
                           {soma_x3,soma_x2,soma_x},
                           {soma_x2,soma_x,n}};



determinante_Cra = matrixD(matrixDeter);

float matrixDeter_a[4][4] = {{soma_x2y,soma_xy,soma_y},
                    {soma_x3,soma_x2,soma_x},
                    {soma_x2,soma_x,n}};


determinante_a = matrixD(matrixDeter_a);

float matrixDeter_b[4][4] = {{soma_x4,soma_x3,soma_x2},
                             {soma_x2y,soma_xy,soma_y},
                             {soma_x2,soma_x,n}};


determinante_b = matrixD(matrixDeter_b);

float matrixDeter_c[4][4] = {{soma_x4,soma_x3,soma_x2},
                             {soma_x3,soma_x2,soma_x},
                             {soma_x2y,soma_xy,soma_y}};


determinante_c = matrixD(matrixDeter_c);

x1 = determinante_a/determinante_Cra;
x2 = determinante_b/determinante_Cra;
x3 = determinante_c/determinante_Cra;

cout <<'\n'<<"y = " <<(x1)<<"*x^2" <<" + "<< (x2)<<"*x" <<" + "<< (x3)<<'\n';
for(i = 0;i<n;i++){
    cout <<"x = "<< x[i]<< "\t" <<"y = "<< (x1*x[i]*x[i]) +(x2*x[i]) + x3<<"\n";
}


for(int j=0;j<n;j++){
    D[j]= (x[j]*x[j]*x1)+(x[j]*x2)+(x3);
    
}

for(i = 0;i<n;i++){
soma_D += (y[i]-D[i])*(y[i]-D[i]) ;
//cout << (y[i]-D[i]) <<"\n";


//cout << "\n"<< "Erro: "<< soma_D << "\n";



}
cout << "\n"<< "Erro: "<< soma_D << "\n";




//cout << soma_x4 << "a\t + " << soma_x3 << "b\t + " << soma_x2 << "c\t = " << soma_x2y << "\n";
//cout << soma_x3 << "a\t + " << soma_x2 << "b\t + " << soma_x  << "c\t = " << soma_xy  << "\n";
//cout << soma_x2 << "a\t + " << soma_x  << "b\t + " << n       << "c\t = " << soma_y   << "\n";
    return 0;
}


float matrixD(float x[4][4]){
double determinante;
for (int i = 0; i<3 ;i++){
    for (int j = 0;j<3;j++){
        //cout << x[i][j]<< " ";
    }
   // cout << "\n";
}

determinante = x[0][0]*x[1][1]*x[2][2]+
               x[0][1]*x[1][2]*x[2][0]+
               x[0][2]*x[1][0]*x[2][1]-
              (x[0][2]*x[1][1]*x[2][0]+
               x[1][0]*x[0][1]*x[2][2]+
               x[0][0]*x[2][1]*x[1][2]);

//cout << determinante<<"\n";   

return determinante;

}

