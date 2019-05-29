#include"classes.h"

// FUNCIONÁRIO

	// GETTERS
	int Funcionario::getId() {
		return id;
	}

	string Funcionario::getNome () {
		return nome;
	}

	string Funcionario::getCPF () {
		return cpf;
	}

	short int Funcionario::getIdade () {
		return idade;
	}

	string Funcionario::getTipoSanguineo () {
		return tipo_sanguineo;
	}

	char Funcionario::getFatorRH () {
		return fator_rh;
	}

	string Funcionario::getEspecialidade () {
		return especialidade;
}

// TRATADOR
	// GETTER

	int Tratador::getNivelDeSeguranca () {
		return nivel_de_seguranca;
	}

	// CONSTRUTORES E DESTRUTOR

	//Tratador::Tratador (int _id, string _nome, string _cpf, short int _idade, string _tipo_sanguineo, char _fator_rh, string _especialidade, int _nivel_de_seguranca) {}

	//Tratador::Tratador (Tratador &_tratador) {}

	Tratador::~Tratador () {}

// VETERINÁRIO
	// GETTER

	string Veterinario::getCRMV () {
		return crmv;
	}

	// CONSTRUTOR E DESTRUTOR

	//Veterinario::Veterinario (int _id, string _nome, string _cpf, short int _idade, string _tipo_sanguineo, char _fator_rh, string _especialidade, string _crmv) {}

	//Veterinario::Veterinario (Veterinario &_veterinario) {}

Veterinario::~Veterinario () {}


// ANIMAL
	// GETTERS

	int Animal::getId() {
		return id;
	}

	string Animal::getClasse() {
		return classe;
	}

	string Animal::getNomeAnimal() {
		return nome_animal;
	}

	string Animal::getNomeCientifico() {
		return nome_cientifico;
	}

	char Animal::getSexo() {
		return sexo;
	}

	double Animal::getTamanho() {
		return tamanho;
	}

	string Animal::getDieta() {
		return dieta;
	}

	int Animal::getTratador() {
		return tratador;
	}

	int Animal::getVeterinario() {
		return veterinario;
	}

	Veterinario Animal::getVeterinario() {
		return veterinario;
	}

	Tratador Animal::getTratador() {
		return tratador;
	}

	string Animal::getNomeBatismo() {
		return nome_batismo;
	}

	Animal::Animal(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo){
		id = _id;
		classe = _classe;
		nome_animal = _nome_animal;
	 	nome_cientifico = _nome_cientifico;
	 	sexo = _sexo;
	 	tamanho = _tamanho;
	 	dieta = _dieta;
	 	veterinario = _veterinario;
	 	tratador = _tratador;
		nome_batismo = _nome_batismo;	
	}

	Animal::~Animal(){

	}


// ANIMAL SILVESTRE

	string AnimalSilvestre::getAutorizacaoIBAMA() {
		return autorizacao_ibama;
	}

	// CONSTRUTOR E DESTRUTOR
	//Falta o construtor

	AnimalSilvestre::~AnimalSilvestre() {}


// ANIMAL NATIVO

	string AnimalNativo::getUFOrigem() {
		return uf_origem;
	}

	string AnimalNativo::getAutorizacao() {
		return autorizacao;
	}

	// CONSTRUTOR E DESTRUTOR
	//Falta o construtor

	AnimalNativo::~AnimalNativo(){

	}

// ANIMAL EXÓTICO

	string AnimalExotico::getPaisOrigem () {
		return pais_origem;
	}

	// CONSTRUTOR E DESTRUTOR

	//AnimalExotico::AnimalExotico (string _autorizacao_ibama, string _pais_origem){}

	AnimalExotico::~AnimalExotico () {}	

// ANFÍBIO

	// GETTERS

	int Anfibio::getTotalDeMudas () {
		return total_de_mudas;
	}

	string Anfibio::getUltimaMuda () {
		return ultima_muda;
	}

	// CONSTRUTOR E DESTRUTOR

	//Anfibio::Anfibio (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, int _total_de_mudas, string _ultima_muda) {}

	Anfibio::~Anfibio () {}

// ANFÍBIO NATIVO

	//AnfibioNativo::AnfibioNativo (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, int _total_de_mudas, string _ultima_muda, string _autorizacao_ibama, string _uf_origem, string _autorizacao) {}

	AnfibioNativo::~AnfibioNativo () {}

// ANFÍBIO EXÓTICO

	//AnfibioExotico::AnfibioExotico (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, int _total_de_mudas, string _ultima_muda, string _autorizacao_ibama, string _pais_origem) {}

	AnfibioExotico::~AnfibioExotico () {}

// AVE

	// GETTERS

	double Ave::getTamanhoDoBicoCm () {
		return tamanho_do_bico_cm;
	}

	double Ave::getEnvergaduraDasAsas () {
		return envergadura_das_asas;
	}

	// CONSTRUTOR E DESTRUTOR

	//Ave::Ave (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, double _tamanho_do_bico_cm, double _envergadura_das_asas) {}

	Ave::~Ave () {}

// AVE NATIVO

	//AveNativo::AveNativo (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, double _tamanho_do_bico_cm, double _envergadura_das_asas, string _autorizacao_ibama, string _uf_origem, string _autorizacao) {}
	
	AveNativo::~AveNativo () {}
	
// AVE EXÓTICO

	//AveExotico::AveExotico (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, double _tamanho_do_bico_cm, double _envergadura_das_asas, string _autorizacao_ibama, string _pais_origem) {}

	AveExotico::~AveExotico () {}

// MAMÍFERO

	// GETTER
	
	string Mamifero::getCorPelo () {
		return cor_pelo;
	}

	// CONSTRUTOR E DESTRUTOR

	//Mamifero::Mamifero (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, string _cor_pelo) {}

	Mamifero::~Mamifero () {}

// MAMÍFERO NATIVO

	//MamiferoNativo::MamiferoNativo (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, string _cor_pelo, string _autorizacao_ibama, string _uf_origem, string _autorizacao) {}

	MamiferoNativo::~MamiferoNativo () {}

// MAMÍFERO EXÓTICO

	//MamiferoExotico::MamiferoExotico (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, string _cor_pelo, string _autorizacao_ibama, string _pais_origem) {}

	MamiferoExotico::~MamiferoExotico () {}

// RÉPTIL

	// GETTERS

	bool Reptil::getVenenoso () {
		return venenoso;
	}

	string Reptil::getTipoVeneno () {
		return tipo_veneno;
	}

	// CONSTRUTOR E DESTRUTOR

	//Reptil::Reptil (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, bool _venenoso, string _tipo_veneno) {}

	Reptil::~Reptil () {}

// RÉPTIL NATIVO

	//ReptilNativo::ReptilNativo(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, bool _venenoso, string _tipo_veneno, string _autorizacao_ibama, string _uf_origem, string _autorizacao) {}

	ReptilNativo::~ReptilNativo () {}

// RÉPTIL EXÓTICO

	//ReptilExotico::ReptilExotico(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, bool _venenoso, string _tipo_veneno, string _autorizacao_ibama, string _pais_origem) {}

ReptilExotico::~ReptilExotico () {}
