/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file paren.cc
  * @author Pablo Romero Armas 
  * @date Nov 4 2024
  * @brief Programa que dice si los paréntesis se cierran bien o mal. 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P31111
  */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main () {

int contador1{0};
int contador2{0};

string fila;

getline(cin, fila);

istringstream stream(fila);

for (char cara:fila){

  if (cara=='('){
    contador1++;
  }
  if (cara==')'){
    contador2++;
  }
}
if (contador1==contador2){
  cout << "Yes" << endl;
  return 0;
}
  cout << "No" << endl;
}
