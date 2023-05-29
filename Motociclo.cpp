#include"Motociclo.h"
using namespace std;

Motociclo::Motociclo()
{
}

Motociclo::Motociclo(string marca, string modelo, int ano, string matricula, int nrodas)
{
	marcaV = marca;
	modeloV = modelo;
	anoV = ano;
	matriculaV = matricula;
	nRodas = nrodas;
}

int Motociclo::getnRodas()
{
	return nRodas;
}

string Motociclo::getmatriculaV() const
{
	return matriculaV;
}

void Motociclo::printVeiculo()
{
	cout << "\n" << endl;
	cout << "\tTipo:\t\t\tMotociclo" << endl;
	cout << "\tMatricula:\t\t" << matriculaV << endl;
	cout << "\tMarca:\t\t\t" << marcaV << endl;
	cout << "\tModelo:\t\t\t" << modeloV << endl;
	cout << "\tAno:\t\t\t" << anoV << endl;
	cout << "\tNum portas:\t\t" << nRodas << endl;
}

bool Motociclo::operator<(const Motociclo& outro) const
{
	return matriculaV < outro.matriculaV;
}

bool Motociclo::addServicoVeiculo(Servico* servico)
{
	if (servico != nullptr) {
		servicosVeiculo.insert(servico);
		return true;
	}
	else {
		return false;
	}
}


void Motociclo::listarServicosVeiculo(string matricula) const
{
	cout << "Servicos do Veiculo:" << endl;
	for (const auto& servicoPtr : servicosVeiculo)
	{
		servicoPtr->printServico();
	}
}

double Motociclo::custoServicos() {
	float custo = 0;
	Colecao<Servico*>::iterator it;
	for (it = servicosVeiculo.begin(); it != servicosVeiculo.end(); it++) 
	{
		custo += (**it).getcustoS();
	}
	return custo;
}