#pragma once
#include<string>
#include<iostream>
#include"Veiculo.h"
using namespace std;

class Automovel : public Veiculo {
private:
	int nPortas;

public:
	Automovel();
	Automovel(string marca, string modelo, int ano, string matricula, int nportas);

	string getmatriculaV() const;
	int getnPortas();


	bool operator<(const Automovel& outro) const;
	virtual bool addServicoVeiculo(Servico* servico);
	void listarServicosVeiculo(string matricula) const;
	void printVeiculo();
	double custoServicos();
};