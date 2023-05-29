#include<string>
#include<iostream>
#include"Servico.h"
using namespace std;


Servico::Servico()
{
}

Servico::Servico(int id, string data, string tipo, string notas, double custo)
{
	idS = id;
	dataS = data;
	tipoS = tipo;
	notaS = notas;
	custoS = custo;

}

bool Servico::operator<(const Servico& outro) const
{
		return idS < outro.idS;
}

int Servico::getidS()
{
	return idS;
}

string Servico::getdataS()
{
	return dataS;
}

string Servico::gettipoS()
{
	return tipoS;
}


string Servico::getnotaS()
{
	return notaS;
}

double Servico::getcustoS()
{
	return custoS;
}



void Servico::printServico() const
{
	
	cout << "\n" << endl;
	cout << "\tID:\t\t" << idS << endl;
	cout << "\tData:\t\t" << dataS << endl;
	cout << "\tTipo:\t\t" << tipoS << endl;
	cout << "\tNotas:\t\t" << notaS << endl;
	cout << "\tCusto:\t\t" << custoS << endl;
}