#ifndef TEMPERATURA_H
#define TEMPERATURA_H

#include <string>
using namespace std;

class Temperatura {
private:
    double valor;       // Armazena o valor da temperatura
    string unidade;     // Armazena a unidade da temperatura (ex: "C", "F", "K")

public:
    // Construtor
    Temperatura(double valor = 0.0, string unidade = "C");

    // Métodos get
    double getValor() const;       // Retorna o valor da temperatura
    string getUnidade() const;     // Retorna a unidade da temperatura

    // Métodos set
    void setValor(double valor);   // Define o valor da temperatura
    void setUnidade(string unidade); // Define a unidade da temperatura

    // Método para imprimir os detalhes da temperatura
    void imprime() const;
};

#endif
