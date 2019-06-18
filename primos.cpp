#include <iostream>
using namespace std;

void primes(int quant);
bool isPrime(int number);
void factPrime(int num);

int main() {
    cout << "Digite a quantidade de primos que deseja: ";
    int quant; cin >> quant;

    primes(quant);
    cout << endl;

    cout << "Digite um numero para fatorarmos: ";
    int num; cin >> num;
    factPrime(num);

    return 0;
}
void factPrime(int num) {
    int factor = 2; // 
    cout << num << " = ";

    while(num != 1) { // o laço terminará caso o numero seja igual a 1
        if(!(num % factor)) {
            cout << factor << " ";
            num = num / factor;
        }
        else {
            factor++; // caso o numero nao seja divisivel
        }
    }
}
void primes(int quant) {
    int count = 0;
    int numbers = 2;
    bool signal = true;

    while(signal == true) {
        if(isPrime(numbers)) { // teste se o numero é primo
            cout << numbers << " ";
            ++count;
        }
        if(count == quant){
             signal = false; // parar a execução
        }
        numbers++;
    }
}

bool isPrime(int number) {
    bool test = true;
    for(int i = 2; i <= (number/ 2); ++i) {
        if(number % i == 0) {
            test = false;
            break;
        } 
    }
    return test;
}