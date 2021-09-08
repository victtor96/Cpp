// Tarefas.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <locale>
#include <ctime>
#include <cstdlib>
#include <time.h>
#include <random>
#include <Windows.h>
#include <memory>
#include <functional>

using namespace std;


int aleatorio(int tam) {
    int random = -1;
   random_device rd;
   while (random <= 0) {
       random = rd();
   }
   int ale = random % tam;
   
   return ale;
}


void gerador(string vetor[],int tam) {
    
    int i, j, rep[100], x = 0, n,cont;
    n = tam;
    rep[0] = aleatorio(n);
   
    for (i = 1; i < n;) {
        rep[i] = aleatorio(n);

        for (j = 0; j <= i; j++) {
            if (rep[j] != rep[i]) {
                x++;
            }
            else { x = 0; }

            if (x == i) {
                i++;
                x = 0;
                break;

            }
        }

    }
    for (cont = 0; cont < n; cont++) {
        cout << vetor[rep[cont]] << endl;
    }







}



int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    string Aulas[] = {"Cálculo Das Probabilidades e Estatística I", "Cálculo Numérico", 
                      "Circuitos Elétricos I", "Física Experimental I",
                      "Mecânica dos Sólidos", "Sociologia do Trabalho"};
    
    string Livros[] = { "1984 - George Orwell", "2000 Leguas Submarinas", "A Arte da Guerra", "A Busca do Graal",
                       "A Revolução dos Bichos","A Sociedade do Anel","Alta Produtividade","Arnold Schwarseneger",
                       "Arquitetura e Organização de Computadores","Contos Inacabados","Cronicas Saxonicas",
                       "Deuses Americanos","Estrutura de Dados - C","Fundação - Asimov","O Cerebro Com Foco e Disciplina",
                       "O Homem Mais Rico da Babilonia","Pai Rico, Pai Pobre","Robos - Asimov","Sandman - Gaiman",
                       "Sistemas Elétricos de Potência","Viagem Fantástica - Asimov","Web Scraping - Python",
                       "Gerador/Verificador de Paridade","Automação Industrial na Prática","Estalações Elétricas Industriais",
                       "Automação Industrial e Sistema de Manufatura","Programação em Matlab Para Engenheiros","Automação Industrial PLC Teoria e Aplicações",
                       "Automação e Instrumentação Industrial com Arduino","Introdução aos Circuitos Elétricos","Sistema Elétrico de Potência",
                       "Engenharia de Controle Moderno","Fundamentos de Máquinas Elétricas","C++ - Como Programar","Indústria 4.0 Conceitos e Fundamentos",
                       "Poder do Habito","Engenharia de Sistemas de Controle","Comandos Elétricos - Guia Prático e Definitivo",
                       "Fundamentos de Circuitos Elétricos","Dispositivos Eletrônicos e Teoria de Circuitos",
    };
    
    int Tam_L,Tam_A;
    Tam_L = sizeof Livros / sizeof Livros[0];
    Tam_A = sizeof Aulas / sizeof Aulas[0];
    
    gerador(Aulas, Tam_A);
    cout << endl;
    gerador(Livros, Tam_L);

    return 0;


}

