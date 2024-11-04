#include <iostream>
using namespace std;
struct Numero{
int numero1;
};

void propouse () {

cout<<"Este programa pasa de binario a decimal"<<endl;
}

bool check (int const argc,char* argv[],int const KcorrectNumber){
        if (argc!=KcorrectNumber){
                cout<<"Demasiados argumentos, solo se necesita 1"<<endl;
        return false;
        }
return true;
}

Numero input(){
        Numero num;
        cout<<"Introduzca el número que desea pasar a decimal"<<endl;
        cin>>num.numero1;
        return num;
}

void operation(int a){
        while(a>0){
        int b;

        b=a;
       
        
        b=b%2;
       
        cout <<b<<" ";

	a=a/2;
}
}
int output(){}

int main(int argc,char* argv[]){

propouse();

        if (!check(argc,argv,1)){
                return 345;
        }

Numero num=input();
operation(num.numero1);
}
