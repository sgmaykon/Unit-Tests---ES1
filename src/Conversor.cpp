#include "Conversor.h"
#include <cmath>
#include <stdexcept> // Para lançar exceções em caso de unidades inválidas

// Implementação da conversão de temperatura
void Conversor::converterTemperatura(Temperatura& origem, const string& novaUnidade) {
    double valorConvertido;
    string unidadeOrigem = origem.getUnidade();
    double valorOrigem = origem.getValor();

    // Conversão de Celsius para outras unidades
    if (unidadeOrigem == "C") {
        if (novaUnidade == "F") {
            valorConvertido = (valorOrigem * 9 / 5) + 32;
        } else if (novaUnidade == "K") {
            valorConvertido = valorOrigem + 273.15;
        } else if (novaUnidade == "C") {
            return; // Mesma unidade, nada a fazer
        } else {
            throw invalid_argument("Unidade de destino inválida para conversão de temperatura.");
        }
    }
    // Conversão de Fahrenheit para outras unidades
    else if (unidadeOrigem == "F") {
        if (novaUnidade == "C") {
            valorConvertido = (valorOrigem - 32) * 5 / 9;
        } else if (novaUnidade == "K") {
            valorConvertido = (valorOrigem - 32) * 5 / 9 + 273.15;
        } else if (novaUnidade == "F") {
            return; // Mesma unidade, nada a fazer
        } else {
            throw invalid_argument("Unidade de destino inválida para conversão de temperatura.");
        }
    }
    // Conversão de Kelvin para outras unidades
    else if (unidadeOrigem == "K") {
        if (novaUnidade == "C") {
            valorConvertido = valorOrigem - 273.15;
        } else if (novaUnidade == "F") {
            valorConvertido = (valorOrigem - 273.15) * 9 / 5 + 32;
        } else if (novaUnidade == "K") {
            return; // Mesma unidade, nada a fazer
        } else {
            throw invalid_argument("Unidade de destino inválida para conversão de temperatura.");
        }
    }
    else {
        throw invalid_argument("Unidade de origem inválida para conversão de temperatura.");
    }

    // Atualiza o objeto original
    origem.setValor(valorConvertido);
    origem.setUnidade(novaUnidade);
}

void Conversor::converterMedida(Medida& origem, const string& novaUnidade) {
    double valorConvertido;
    string unidadeOrigem = origem.getUnidade();
    double valorOrigem = origem.getValor();

    if (unidadeOrigem == "M" && novaUnidade == "P") {
        valorConvertido = valorOrigem * 3.28084;
    } else if (unidadeOrigem == "P" && novaUnidade == "M") {
        valorConvertido = valorOrigem / 3.28084;
    } else if (unidadeOrigem == novaUnidade) {
        return; // Mesma unidade, nada a fazer
    } else {
        throw invalid_argument("Conversão de medida não suportada.");
    }

    // Atualiza o objeto original
    origem.setValor(valorConvertido);
    origem.setUnidade(novaUnidade);
}
