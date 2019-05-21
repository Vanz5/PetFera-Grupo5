#include "funcionario.h"

//Funcionario
int Funcionario::getID(){
	return id;
}

void Funcionario::setID(id){
	Id = id;
} 

string Funcionario::getNome(){
	return Nome;
}

void Funcionario::setNome(nome){
	strcpy(Nome, nome);
}

string Funcionario::getCpf(){
	return Cpf;
}

void Funcionario::setCpf(cpf){
	strcpy(Cpf, cpf);
}

int Funcionario::getIdade(){
	return Idade;
}

void Funcionario::setIdade(idade){
	Idade = idade;
}

string Funcionario::getTipoSanguineo(){
	return TipoSanguineo;
}

void Funcionario::setTipoSanguineo(tipoSanguineo){
	strcpy(TipoSanguineo, tipoSanguineo);
}

char Funcionario::getFatorRH(){
	return FatorRH;
}

void Funcionario::setID(fatorRH){
	FatorRH = fatorRH;
}

string Funcionario::getEspecialidade(){
	return Especialidade;
}

void Funcionario::Especialidade(especialidade){
	strcpy(Especialidade, especialidade);
}


//Tratador
int Tratador::getNivelSeg(){
	return NivelSeg;
}

void Tratador::setNivelSeg(nivelSeg){
	NivelSeg = nivelSeg;
}

Tratador::Tratador(int id, string nome, string cpf, int idade, string tipoSanguineo, char fatorRH, string especialidade, int nivelSeg){
	Id = id;
	strcpy(Nome,nome);
	strcpy(Cpf, cpf);
	Idade = idade;
	strcpy(TipoSanguineo, tipoSanguineo);
	FatorRH = fatroRh;
	strcpy(Especialidade, especialidade);
	NivelSeg = nivelSeg;
}


//Veterinario
string Veterinario::getCRMV(){
	return CRMV;
}

void Veterinario::CRMV(crmv){
	strcpy(CRMV, crmv);
}

Veterinario::Veterinario(int id, string nome, string cpf, int idade, string tipoSanguineo, char fatorRH, string especialidade, string crmv){
	Id = id;
	strcpy(Nome,nome);
	strcpy(Cpf, cpf);
	Idade = idade;
	strcpy(TipoSanguineo, tipoSanguineo);
	FatorRH = fatroRh;
	strcpy(Especialidade, especialidade);
	strcpy(CRMV, crmv);
}
