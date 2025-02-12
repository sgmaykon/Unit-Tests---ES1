#ifndef MEDIDA_H
#define MEDIDA_H
#include "Temperatura.h"


class Medida{
	private:
		double valor;
		string unidade;
	
	public:
		Medida(double valor, string unidade);
		~Medida();
		double getValor() const;
		string getUnidade() const;
		void setValor(double valor);
		void setUnidade(string unidade);

		void imprime() const;
};

#endif
