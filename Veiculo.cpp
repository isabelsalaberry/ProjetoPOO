#include"Colecao.h"
#include"Veiculo.h"
using namespace std;

Veiculo::Veiculo(){}
Veiculo::Veiculo(string marca, string modelo, int ano, string matricula)
    {
        marcaV = marca;
        modeloV = modelo;
        anoV = ano;
        matriculaV = matricula;
    }

    string Veiculo::getmarcaV() const
    {
        return marcaV;
    }

    string Veiculo::getmodeloV() const
    {
        return modeloV;
    }

    int Veiculo::getanoV() const
    {
        return anoV;
    }

    string Veiculo::getmatriculaV() const
    {
        return matriculaV;
    }


    void Veiculo::printVeiculo()
    {
    }

    bool Veiculo::addServicoVeiculo(Servico* servico) 
    {
        return false;
    }

    bool Veiculo::operator<(const Veiculo& outro) const
    {
        return matriculaV < outro.matriculaV;

    }

    const Colecao<Servico*>& Veiculo::getServicosVeiculo() const
    {
        return servicosVeiculo;
    }

    void Veiculo::listarServicosVeiculo() const
    {
    }

    
