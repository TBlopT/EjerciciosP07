#include <iostream>
#include <string>
using namespace std;
int resultado;

 struct Numeros {
 int numero1;
 };
unsigned long long numero1;

void PrintProgramPurpose(){
	cout<<"Programa destinado a la sumatoria de dígitos de un número"<<'\n';
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
	if (argc != kCorrectNumber) {
	cout<<"Hermano hay un problema xd"<<endl;
	return false;
}
return true;
}

 Numeros Entrada(){

	Numeros numeros;
 	cout<<"Introduzca primer número a sumar: ";
 	cin>>numeros.numero1;
	return numeros;
}

void suma(unsigned long long numero1){
resultado=0;	
	while (numero1>0){
	resultado+=numero1%10;
	numero1/=10;}
}
void Salida(){ 
	cout<<"La sumatoria de los dígitos es :"<< resultado <<endl;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 1;
  }

  Numeros numeros =  Entrada();
  suma(numeros.numero1);
  Salida();
  return 0;
}

