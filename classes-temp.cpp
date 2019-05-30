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

	int Animal::getVeterinario() {
		return veterinario;
	}

	int Animal::getTratador() {
		return tratador;
	}

	string Animal::getNomeBatismo() {
		return nome_batismo;
	}

	Animal::Animal(int i, string clas, string n, string ncientifico, char sex, double tam, string diet, int vet, int trat, string nbatismo){
		this->id = i;
		this->classe = clas;
		this->nome_animal = n;
		this->nome_cientifico = ncientifico;
		this->sexo = sex;
		this->tamanho = tam;
		this->dieta = diet;
		this->veterinario = vet;
		this->tratador = trat;
		this->nome_batismo = nbatismo;
	}

	Animal::~Animal(){}


// ANIMAL SILVESTRE

	// CONSTRUTOR E DESTRUTOR
	AnimalSilvestre::AnimalSilvestre(string autIbama){
		this->autorizacao_ibama = autIbama;
	}

	AnimalSilvestre::~AnimalSilvestre(){}


// ANIMAL NATIVO

	int AnimalNativo::getId(){
		return id;
	}

	string AnimalNativo::getUFOrigem() {
		return uf_origem;
	}

	string AnimalNativo::getAutorizacao() {
		return autorizacao;
	}

	string AnimalNativo::getAutorizacaoIBAMA() {
		return this->autorizacao_ibama;
	}

	// CONSTRUTOR E DESTRUTOR
	AnimalNativo::AnimalNativo(int i, string clas, string n, string ncientifico, char sex, double tam, string diet, int vet, int trat, string nbatismo, string autIbama, string uf, string aut): Animal(i, clas, n,  ncientifico, sex, tam, diet, vet, trat, nbatismo), AnimalSilvestre(autIbama){
		this->uf_origem = uf;
		this->autorizacao = aut;
	}

	AnimalNativo::~AnimalNativo() {}

// ANIMAL EXÓTICO

	string AnimalExotico::getPaisOrigem(){
		return pais_origem;
	}

	string AnimalExotico::getAutorizacao(){
		return autorizacao;
	}

	string AnimalExotico::getAutorizacaoIBAMA(){
		return this->autorizacao_ibama;
	}

	// CONSTRUTOR E DESTRUTOR

	AnimalExotico::AnimalExotico(int i, string clas, string n, string ncientifico, char sex, double tam, string diet, int vet, int trat, string nbatismo, string autIbama, string p, string a):Animal(i, clas, n,  ncientifico, sex, tam, diet, vet, trat, nbatismo), AnimalSilvestre(autIbama){
		this->pais_origem = p;
		this->autorizacao = a;
	}

	AnimalExotico::~AnimalExotico(){}		

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
