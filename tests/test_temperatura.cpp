#include "doctest.h"
#include "Temperatura.h"
using namespace std;

TEST_CASE("Test Temperatura Constructor and Getters") {
    Temperatura t(25.0, "C");
    CHECK(t.getValor() == 25.0);
    CHECK(t.getUnidade() == "C");
}

TEST_CASE("Test Temperatura Setters") {
    Temperatura t(0.0, "C");
    t.setValor(30.0);
    t.setUnidade("F");
    CHECK(t.getValor() == 30.0);
    CHECK(t.getUnidade() == "F");
}

