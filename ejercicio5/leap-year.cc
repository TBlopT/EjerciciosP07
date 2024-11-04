#include <iostream>
using namespace std;

struct Numeros{
int numero1;
};

void purpose (){

  cout << "Este programa te dice si un año es bisiesto o no" << endl;

}

bool check (int const argc, char* argv[], int const KCorrectNumber){

  if (argc!=KCorrectNumber){
          cout<<"Demasiados argumentos"<<endl;
          return false;
}
return true;
}
Numeros input(){

        Numeros num;
        cout<<"Introduce un número: ";

        cin>>num.numero1;

        return num;


}

void operation(int a){
while (a>0) {
 if (a%4==0 && a%100!=0){
        cout<<"SI"<<endl;
 }
 if (a%100==0 && ((a/100)%4==0)){
         cout <<"SI"<<endl;


}
else
cout <<"No"<<endl;
}

}
int main(int argc, char* argv[]){

  purpose();
  Numeros num=input();
  operation(num.numero1);


  if (!check(argc,argv,1)){
          return 345;}
}

