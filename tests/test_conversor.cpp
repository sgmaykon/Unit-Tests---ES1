#include "doctest.h"
#include "Conversor.h"
#include "Temperatura.h"
#include "Medida.h"

using namespace std;

TEST_CASE("Test Conversor Temperatura (Celsius to Fahrenheit)") {
    Temperatura t(25.0, "C");
    Conversor conv;
    conv.converterTemperatura(t, "F");
    CHECK(t.getValor() == doctest::Approx(77.0));
    CHECK(t.getUnidade() == "F");
}

TEST_CASE("Test Conversor Temperatura (Fahrenheit to Celsius)") {
    Temperatura t(77.0, "F");
    Conversor conv;
    conv.converterTemperatura(t, "C");
    CHECK(t.getValor() == doctest::Approx(25.0));
    CHECK(t.getUnidade() == "C");
}

TEST_CASE("Test Conversor Medida (Metros to Pés)") {
    Medida m(10.0, "M");
    Conversor conv;
    conv.converterMedida(m, "P");
    CHECK(m.getValor() == doctest::Approx(32.8084));
    CHECK(m.getUnidade() == "P");
}

TEST_CASE("Test Conversor Medida (Pés to Metros)") {
    Medida m(32.8084, "P");
    Conversor conv;
    conv.converterMedida(m, "M");
    CHECK(m.getValor() == doctest::Approx(10.0));
    CHECK(m.getUnidade() == "M");
}
