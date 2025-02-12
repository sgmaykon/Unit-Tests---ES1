#include "doctest.h"
#include "Medida.h"
using namespace std;

TEST_CASE("Test Medida Constructor and Getters") {
    Medida m(10.0, "metros");
    CHECK(m.getValor() == 10.0);
    CHECK(m.getUnidade() == "metros");
}

TEST_CASE("Test Medida Setters") {
    Medida m(0.0, "metros");
    m.setValor(32.8084);
    m.setUnidade("pés");
    CHECK(m.getValor() == 32.8084);
    CHECK(m.getUnidade() == "pés");
}
