#pragma once
#include<string>
#include<iostream>
#include"ColecaoHibrida.h"
#include"Veiculo.h"
#include"Automovel.h"
#include"Motociclo.h"
using namespace std;

class Proprietario {
private:
	string nomeP;
	ColecaoHibrida<Veiculo*>veiculos;
	Colecao<Servico>servicos;

public:
	Proprietario(string nome);																											//OK
	string getnomeP();																													//OK

	//..............................................VEICULOS...............................
	void listarVeiculos();																												//OK
	Veiculo* findVeiculo(const string& matricula);
	int numVeiculos();																													//OK


	//..............................................SERVICOS................................
	bool addServico(int id, string data, string tipo, string notas, double custo);
	void listarServicos();
	//int listarServicosPorTipo(string tipo);		FAZER - nao precisa
	bool atribuirServico(string matricula, int id);
	Servico* findServico(int idS);


	//..............................................AUTOMOVEL...............................
	bool addAutomovel(const string& marca, const string& modelo, const int& ano, const string& matricula, const int& nportas);



	//..............................................MOTOCICLO................................
	bool addMotociclo(const string& marca, const string& modelo, const int& ano, const string& matricula, const int& nrodas);



	//..............................................CALCULAR CUSTO...........................
	double calcularCustoTotal();	//fazer
};