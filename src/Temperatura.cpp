#include "Temperatura.h"
#include <iostream>
using namespace std;

// Construtor
Temperatura::Temperatura(double valor, string unidade) {
    this->valor = valor;
    this->unidade = unidade;
}

// Métodos get
double Temperatura::getValor() const {
    return valor;
}

string Temperatura::getUnidade() const {
    return unidade;
}

// Métodos set
void Temperatura::setValor(double valor) {
    this->valor = valor;
}

void Temperatura::setUnidade(string unidade) {
    this->unidade = unidade;
}

// Método para imprimir os detalhes da temperatura
void Temperatura::imprime() const {
    cout << "Temperatura: " << valor << " " << unidade << endl;
}


