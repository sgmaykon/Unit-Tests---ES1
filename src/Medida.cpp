#include "Medida.h"
#include <iostream>
using namespace std;

// Construtor
Medida::Medida(double valor, string unidade) {
    this->valor = valor;
    this->unidade = unidade;
}

// Destrutor
Medida::~Medida() {
    // Destrutor vazio (não há alocação dinâmica para liberar)
}

// Métodos get
double Medida::getValor() const {
    return valor;
}

string Medida::getUnidade() const {
    return unidade;
}

// Métodos set
void Medida::setValor(double valor) {
    this->valor = valor;
}

void Medida::setUnidade(string unidade) {
    this->unidade = unidade;
}

// Método para imprimir os detalhes da medida
void Medida::imprime() const {
    cout << "Medida: " << valor << " " << unidade << endl;
}
