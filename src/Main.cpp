#include "Temperatura.h"
#include "Conversor.h"
#include "Medida.h"
#include <iostream>
using namespace std;

int main() {
    int input = -9;
    string origem;
    string destino;
    double valor;

    while (input != 0) {
        cout << "Qual Tipo de conversao voce quer fazer?" << endl;
        cout << "1 - Temperatura | 2 - Medida | 0 - Sair" << endl;
        cin >> input;

        if (input == 1) {
            cout << "Digite o valor: ";
            cin >> valor;

            cout << "Qual a unidade de origem?" << endl;
            cout << "C - Celsius | K - Kelvin | F - Fahrenheit" << endl;
            cin >> origem;

            cout << "Qual a unidade de destino?" << endl;
            cout << "C - Celsius | K - Kelvin | F - Fahrenheit" << endl;
            cin >> destino;

            Temperatura* temperatura = new Temperatura(valor, origem);
            Conversor* conversor = new Conversor();
            conversor->converterTemperatura(*temperatura, destino);
            cout << "Valor convertido: " << temperatura->getValor() << " " << temperatura->getUnidade() << endl;

            delete temperatura;
            delete conversor;
        }
        else if (input == 2) {
            cout << "Digite o valor: ";
            cin >> valor;

            cout << "Qual a unidade de origem?" << endl;
            cout << "M - Metro | P - Pes" << endl;
            cin >> origem;

            cout << "Qual a unidade de destino?" << endl;
            cout << "M - Metro | P - Pes" << endl;
            cin >> destino;

            Medida* medida = new Medida(valor, origem);
            Conversor* conversor = new Conversor();
            conversor->converterMedida(*medida, destino);
            cout << "Valor convertido: " << medida->getValor() << " " << medida->getUnidade() << endl;

            delete medida;
            delete conversor;
        }
	else
		cout<< "Digite uma opcao valida" ;
    }

    return 0;
}
