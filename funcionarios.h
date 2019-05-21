#ifndef _funcionarios_h_
#define _funcionarios_h_

#include <iostream>
#include <string>

using namespace std;
 
class Funcionario{
	protected:
		int Id;
		string Nome;
		string Cpf;
		int Idade;
		string TipoSanguineo;
		char FatorRH;
		string Especialidade;
		
	public:
		int getId();
		void setId(int id);

		string getNome();
		void setNome(string nome);

		string getCpf();
		void setCpf(string cpf);

		int getIdade();
		void setIdade(int idade);

		string getTipoSanguineo();
		void setTipoSanguineo(string tipoSanguineo);

		char getFatorRH();
		void setFatorRH(char fatorRH);

		string getEspecialidade();
		void setEspecialidade(string especialidade);
};

class Tratador: public Funcionario{
	private:
		int NivelSeg;
	public:
		int getNivelSeg();
		void setNivelSeg(int nivelSeg);

		Tratador(int id, string nome, string cpf, int idade, string tipoSanguineo, char fatorRH, string especialidade, int nivelSeg);
};

class Veterinario: public Funcionario{
	private:
		string CRMV;
	public:
		string getCRMV();
		void setCRMV(string crmv);

		Veterinario(int id, string nome, string cpf, int idade, string tipoSanguineo, char fatorRH, string especialidade, string crmv);
};

#endif
