#include <iostream>
#include <string>
using namespace std;
struct Numero{
int numero1;
};

void propouse (){
	cout<<"Este programa genera números de fibonacci"<<endl;
}

bool check (const int argc, const int Kcorrectnumber) {
	if (argc!=Kcorrectnumber){
		cout <<"Demasiados parámetros"<<endl;
	return false;
}
	return true;
}

Numero input(){
Numero Numero;
cout << "¿Cuántos números fibonacci desea?: "<< endl;

cin >> Numero.numero1;
return Numero;

}
void operation(int cantidad){
	int a =0;
	int b =1;

	 for (int i{0}; cantidad>i;i++){

		 cout << a << " ";
		 int siguiente = a+b;
	         a=b;
		 b=siguiente;
}
cout<<endl;
}
int main(int argc, char* argv[]){

	propouse();
	if (!check(argc,1)){
		return 345;
	}
	Numero Numero= input();
	operation(Numero.numero1);	

}
	

