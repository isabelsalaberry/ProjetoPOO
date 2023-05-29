#include<string>
#include<iostream>
#include"Proprietario.h"
#include"Veiculo.h"
#include"Servico.h"
using namespace std;


int main() {

	cout << "\n\t!!!TRABALHO DE POO!!!\n\n" << endl;
	Proprietario p("The Rock");

	//addVeiculos na colecao hibrida
	p.addAutomovel("Volkswagen", "Kombi", 2020, "43 - 15 - OM", 4);
	p.addMotociclo("Honda", "PCX", 2021, "23 - 04 - PA", 2);
	p.addAutomovel("Volkswagen", "Fusca", 1980, "23 - 04 - PI", 2);
	p.addMotociclo("Can-Am", "Spyder", 2022, "84 - 32 - OI", 3);

	//listar todos os veiculos do proprietario
	p.listarVeiculos();

	//addServicos na colecao
	p.addServico(160504, "16/05/2004", "manutencao do oleo", "ultima muda de oleo", 20.50);
	p.addServico(304550, "27/05/2023", "lavagem", "cuidado com o para-brisa traseiro", 55.25);

	//lista todos os servicos
	p.listarServicos();

	//vincula o servico ao veiculo
	p.atribuirServico("23 - 04 - PI", 160504);	
	p.atribuirServico("43 - 15 - OM", 304550);

	//calcula o custo total a pagar pelo proprietario
	p.calcularCustoTotal();

	

}

