#include <iostream>
using namespace std;

struct Numero {
    int numero1;
};

void propouse() {
    cout << "Este programa pasa de decimal a binario" << endl;
}

bool check(int const argc, char* argv[], int const KcorrectNumber) {
    if (argc != KcorrectNumber) {
        cout << "Demasiados argumentos, solo se necesita 1" << endl;
        return false;
    }
    return true;
}

int input() {
    int num;
    cout << "Introduzca el número que desea pasar de binario a decimal" << endl;
    cin >> num;
    return num;
}

int operation(int binary) {
    int decimal = 0;
    int base = 1;

    while (binary > 0) {
        int last_digit = binary % 10;
        decimal += last_digit * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

void output(int decimal) {
    cout << "Su número en decimal es: " << decimal << endl;
}

int main(int argc, char* argv[]) {
    propouse();

    if (!check(argc, argv, 1)) {
        return 345;
    }
    
    int num = input();
    int decimalResult = operation(num);
    output(decimalResult);

    return 0;
}
