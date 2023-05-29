#pragma once
#include<string>
#include<iostream>
using namespace std;

class Servico {
private:
	int idS;
	string dataS, tipoS, notaS;
	double custoS;

public:
	Servico();
	Servico(int id, string data, string tipo, string notas, double custo);

	int getidS();
	string getdataS();
	string gettipoS();
	string getnotaS();
	double getcustoS();

	bool operator<(const Servico& outro) const;
	void printServico() const;
};