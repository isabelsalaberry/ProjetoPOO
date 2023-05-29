#pragma once
#include<string>
#include"Colecao.h"
#include"Servico.h"
using namespace std;

class Veiculo {
protected:
	Colecao<Servico*> servicosVeiculo;
	string marcaV;
	string modeloV;
	string matriculaV;
	int anoV;

public:
	Veiculo();
	Veiculo(string marca, string modelo, int ano, string matricula);

	string getmarcaV()const;
	string getmodeloV()const;
	int getanoV()const;
	string getmatriculaV() const;

	bool operator<(const Veiculo& outro) const;
	virtual void printVeiculo();
	virtual bool addServicoVeiculo(Servico* servico);
	const Colecao<Servico*>& getServicosVeiculo() const;
	virtual void listarServicosVeiculo()const; 
	float custoServicos();
	
};