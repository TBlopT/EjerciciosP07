/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file decre.cc
  * @author Pablo Romero Armas alu0101743844@ull.edu.es
  * @date Nov 04 2024
  * @brief Rango de números en decreción. 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/S002
  */

#include <iostream>

using namespace std;

int main (){
int numero1;
int numero2;

cin >> numero1 >> numero2;

  if (numero1 == numero2){
    cout << numero1 << endl;
  }
  if (numero1 > numero2){
    cout << numero1 << endl;
    while (numero1 > numero2){
      numero1--;
      cout << numero1 << endl;
    }
  }

  if (numero2 > numero1){
    cout << numero2 << endl;
    while (numero2 > numero1){
       numero2--;
       cout << numero2 << endl;
     }
  }
}



