#pragma once
#include<string>
#include<iostream>
#include"Veiculo.h"
using namespace std;

class Motociclo : public Veiculo {
private:
	int nRodas;

public:
	Motociclo();
	Motociclo(string marca, string modelo, int ano, string matricula, int nrodas);

	int getnRodas();
	string getmatriculaV() const;


	bool operator<(const  Motociclo& outro) const;
	bool addServicoVeiculo(Servico* serv);
	void listarServicosVeiculo(string matricula) const;
	void printVeiculo();
	double custoServicos();
};