/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file armonicos.cc
  * @author Pablo Romero Armas
  * @date Nov 4 2024
  * @brief Muestra resta de la sumatoria de armónicos de dos variables. 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P58153
  *
  */

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

double operation (double a){

double resultado {0.0};

cout << fixed << setprecision(10);

vector <double> numeros;

  while (a>0){

    resultado=1.0/a;

    a--;

    numeros.push_back(resultado);
}


 double suma {0.0};

for (double num:numeros){
 suma+=num;
 }

return suma;


}

int main (){

int a;
int b;

cin >> a >> b;

if (b>a){

        return 345;}

double resultado;

cout << fixed << setprecision(10);

double a1= operation(a);
double a2= operation(b);
resultado = a1-a2;

cout <<resultado<<endl;
}
