#include<string>
#include<iostream>
#include"Automovel.h"
using namespace std;

Automovel::Automovel() 
{
    nPortas = 0;
}

Automovel::Automovel(string marca, string modelo, int ano, string matricula, int nportas)
{
    marcaV = marca;
    modeloV = modelo;
    anoV = ano;
    matriculaV = matricula;
    nPortas = nportas;
}

int Automovel::getnPortas()
{
    return nPortas;
}

string Automovel::getmatriculaV() const
{
    return matriculaV;
}

void Automovel::printVeiculo()
{
    cout << "\n" << endl;
    cout << "\tTipo:\t\t\tAutomovel" << endl;
    cout << "\tMatricula:\t\t" << matriculaV << endl;
    cout << "\tMarca:\t\t\t" << marcaV << endl;
    cout << "\tModelo:\t\t\t" << modeloV << endl;
    cout << "\tAno:\t\t\t" << anoV << endl;
    cout << "\tNum portas:\t\t" << nPortas << endl;
}

bool Automovel::operator<(const Automovel& outro) const
{
    return matriculaV < outro.matriculaV;
}

bool Automovel::addServicoVeiculo(Servico* servico)
{
    if (servico != nullptr) {
        servicosVeiculo.insert(servico);
        return true;
    }
    else {
        return false;
    }
}

void Automovel::listarServicosVeiculo(string matricula) const
{
    cout << "Servicos do Veiculo:" << endl;
    for (const auto& servicoPtr : servicosVeiculo) {
        servicoPtr->printServico();
    }
}

double Automovel::custoServicos(){
    float custo = 0;
    Colecao<Servico*>::iterator it;
    for (it = servicosVeiculo.begin(); it != servicosVeiculo.end(); it++) {
        custo += (**it).getcustoS();
    }
    return custo;
}