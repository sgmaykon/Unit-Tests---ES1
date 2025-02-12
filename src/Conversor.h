#include "Medida.h"
#include "Temperatura.h"
#include <string>
#include <stdexcept>
using namespace std;

class Conversor {
public:
    // Converte temperaturas
    static void converterTemperatura(Temperatura& origem, const string& novaUnidade);

    // Converte medidas 
    static void converterMedida(Medida& origem, const string& novaUnidade);
};
