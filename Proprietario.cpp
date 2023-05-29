#include"Proprietario.h"
using namespace std;


Proprietario::Proprietario(string nome)
{
	nomeP = nome;
}

string Proprietario::getnomeP()
{
	return nomeP;
}

Veiculo* Proprietario::findVeiculo(const string &matricula) 
{
	Automovel a("", "", 0, matricula, 0);
	return veiculos.find(&a);
}

void Proprietario::listarVeiculos()
{
	cout << "-----------------------------------------------------------" << endl;
	cout << "\n->\tTodos os veiculos do Proprietario " << nomeP << endl;
	ColecaoHibrida<Veiculo*>::iterator i;
	for (i = veiculos.begin(); i != veiculos.end(); i++)
		(**i).printVeiculo();
	cout << "\n------------------------------------------------------------\n\n" << endl;
}

int Proprietario::numVeiculos()
{
	return veiculos.size();
}


bool Proprietario::addServico(int id, string data, string tipo, string notas, double custo)
{
	Servico s(id, data, tipo, notas, custo);
	bool sucesso = servicos.insert(s);

	if (sucesso)
		cout << "(Servico adicionado com sucesso!)" << endl;
	else
		cout << "(Falha ao adicionar o servico.)" << endl;

	return sucesso;
}


Servico* Proprietario::findServico(int idS) {
	Servico s(idS, "", "", "", 0);
	return servicos.find(s);
}


void Proprietario::listarServicos()
{
	cout << "-----------------------------------------------------------" << endl;
	cout << "\n->\tTodos os Servicos do Proprietario " << nomeP << endl;
	for (Colecao<Servico>::iterator it = servicos.begin(); it != servicos.end(); ++it)
		it->printServico();
	cout << "\n-----------------------------------------------------------\n\n" << endl;
}

bool Proprietario::atribuirServico(string matricula, int id)
{
	Veiculo* veiculo = findVeiculo(matricula);
	Servico* servico = findServico(id);

	if (veiculo == nullptr)
	{
		cout << "(Veiculo com a matricula " << matricula << " nao encontrado.)" << endl;
		return false;
	}

	if (servico == nullptr)
	{
		cout << "(Servico com o ID " << id << " nao encontrado.)" << endl;
		return false;
	}

	if (veiculo->addServicoVeiculo(servico))
	{
		cout << "(Servico atribuido com sucesso ao veiculo.)" << endl;
		return true;
	}
	else
	{
		cout << "(Falha ao atribuir o servico ao veiculo.)" << endl;
		return false;
	}
}
	


bool Proprietario::addAutomovel(const string &marca, const string &modelo, const int &ano, const string &matricula, const int &nportas)
{
	Automovel* a = new Automovel(marca, modelo, ano, matricula, nportas);
	bool successo = veiculos.insert(a);

	if (successo)
		cout << "(Automovel adicionado com sucesso!)" << endl;
	else
		cout << "(Falha ao adicionar o automovel.)" << endl;

	return successo;
}



bool Proprietario::addMotociclo(const string& marca, const string& modelo, const int& ano, const string& matricula, const int& nrodas)
{
	Motociclo* m = new Motociclo(marca, modelo, ano, matricula, nrodas);
	bool successo = veiculos.insert(m);

	if (successo)
		cout << "(Motociclo adicionado com sucesso!)" << endl;
	else
		cout << "(Falha ao adicionar o motociclo.)" << endl;

	return successo;
}

double Proprietario::calcularCustoTotal() {
	float total = 0;
	ColecaoHibrida<Veiculo*>::iterator i;
	for (i = veiculos.begin(); i != veiculos.end(); i++) {
		total += (**i).custoServicos();
	}
	cout << "---------------------------------------------------------" << endl;
	cout << "|\tPreco total a pagar = " << total << "eur \t\t\t|" << endl;
	cout << "---------------------------------------------------------" << endl;
	return total;
}