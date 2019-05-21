#include "classes.h"

// FUNCIONÁRIO

	// SETTERS
		
	void Funcionario::setID (int _id) {
		id = _id;
	}

	void Funcionario::setNome (string _nome) {
		strcpy (nome, _nome);
	}

	void Funcionario::setCPF (string _cpf) {
		strcpy (cpf, _cpf);
	}

	void Funcionario::setIdade (short int _idade) {
		idade = _idade;
	}

	void Funcionario::setTipoSanguineo (string _tipo_sanguineo) {
		strcpy (tipo_sanguineo, _tipo_sanguineo);
	}

	void Funcionario::setFatorRH (char _fator_rh) {
		fator_rh = _fator_rh;
	}

	void Funcionario::setEspecialidade (string _especialidade) {
		strcpy (especialidade, _especialidade);
	}

	// GETTERS

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

	// SETTER

	void setNivelDeSeguranca (int _nivel_de_seguranca) {
		nivel_de_seguranca = _nivel_de_seguranca;
	}

	// GETTER

	int getNivelDeSeguranca () {
		return nivel_de_seguranca;
	}

	// CONSTRUTORES E DESTRUTOR

	Tratador::Tratador (int _id, string _nome, string _cpf, short int _idade, string _tipo_sanguineo, char _fator_rh, string _especialidade, int _nivel_de_seguranca) {
		id = _id;
		strcpy (nome, _nome);
		strcpy (cpf, _cpf);
		idade = _idade;
		strcpy (tipo_sanguineo, _tipo_sanguineo);
		fator_rh = _fator_rh;
		strcpy (especialidade, _especialidade);
		nivel_de_seguranca = _nivel_de_seguranca;			
	}

	Tratador::Tratador (Tratador &_tratador) {
		id = _tratador.getID();
		strcpy (nome, _tratador.getNome());
		strcpy (cpf, _tratador.getCPF());
		idade = _tratador.getIdade();
		strcpy (tipo_sanguineo, _tratador.getTipoSanguineo());
		fator_rh = _tratador.getFatorRH();
		strcpy (especialidade, _tratador.getEspecialidade());
		nivel_de_seguranca = _tratador.getNivelDeSeguranca();
	}

	Tratador::~Tratador () {}

// VETERINÁRIO

	// SETTER

	void setCRMV (string _crmv) {
		strcpy (crmv, _crmv);
	}

	// GETTER

	string getCRMV () {
		return crmv;
	}

	// CONSTRUTOR E DESTRUTOR

	Veterinario::Veterinario (int _id, string _nome, string _cpf, short int _idade, string _tipo_sanguineo, char _fator_rh, string _especialidade, string _crmv) {
		id = _id;
		strcpy (nome, _nome);
		strcpy (cpf, _cpf);
		idade = _idade;
		strcpy (tipo_sanguineo, _tipo_sanguineo);
		fator_rh = _fator_rh;
		strcpy (especialidade, _especialidade);
		strcpy (crmv, _crmv);			
	}

	Veterinario::Veterinario (Veterinario &_veterinario) {
		id = _veterinario.getID();
		strcpy (nome, _veterinario.getNome());
		strcpy (cpf, _veterinario.getCPF());
		idade = _veterinario.getIdade();
		strcpy (tipo_sanguineo, _veterinario.getTipoSanguineo());
		fator_rh = _veterinario.getFatorRH();
		strcpy (especialidade, _veterinario.getEspecialidade());
		strcpy (crmv, _veterinario.getCRMV());
	}

	Veterinario::~Veterinario () {}

// ANIMAL

	// SETTERS

	void setID (int _id) {
		id = _id;
	}

	void setClasse (string _classe) {
		strcpy (classe, _classe);
	}

	void setNomeAnimal (string _nome_animal) {
		strcpy (nome_animal, _nome_animal);
	}

	void setNomeCientifico (string _nome_cientifico) {
		strcpy (nome_cientifico, _nome_cientifico);
	}

	void setSexo (char _sexo) {
		sexo = _sexo;
	}

	void setTamanho (double _tamanho) {
		tamanho = _tamanho;
	}

	void setDieta (string _dieta) {
		strcpy (dieta, _dieta);
	}

	void setVeterinario (int _veterinario) {
		veterinario = _veterinario;
	}

	void setTratador (int _tratador) {
		tratador = int _tratador;
	}

	void setNomeBatismo (string _nome_batismo) {
		strcpy (nome_batismo, _nome_batismo);
	}

	// GETTERS

	string getID () {
		return id;
	}

	string getClasse () {
		return classe;
	}

	string getNomeAnimal () {
		return nome_animal;
	}

	string getNomeCientifico () {
		return nome_cientifico;
	}

	char getSexo () {
		return sexo;
	}

	double getTamanho () {
		return tamanho;
	}

	string getDieta () {
		return dieta;
	}

	Veterinario getVeterinario () {
		return &veterinario;
	}

	Tratador getTratador () {
		return &tratador;
	}

	string getNomeBatismo () {
		return nome_batismo;
	}

	// CONSTRUTOR E DESTRUTOR

	Animal::Animal (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo) {
		id = _id;
		strcpy (classe, _classe);
		strcpy (nome_animal, _nome_animal);
	 	strcpy (nome_cientifico, _nome_cientifico);
	 	sexo = _sexo;
	 	tamanho = _tamanho;
	 	strcpy (dieta, _dieta);
	 	veterinario = _veterinario;
	 	tratador = _tratador;
	 	strcpy (nome_batismo, _nome_batismo);
	 }

	Animal::~Animal () {}

// ANIMAL SILVESTRE

	// SETTER

	void setAutorizacaoIBAMA (string _autorizacao_ibama) {
		strcpy (autorizacao_ibama, _autorizacao_ibama);
	}

	// GETTER

	string getAutorizacaoIBAMA () {
		return autorizacao_ibama;
	}

	// CONSTRUTOR E DESTRUTOR

	AnimalSilvestre::AnimalSilvestre (string _autorizacao_ibama) {
		strcpy (autorizacao_ibama, _autorizacao_ibama);
	}

	AnimalSilvestre::~AnimalSilvestre () {}

// ANIMAL NATIVO

	// SETTERS

	void setUFOrigem (string _uf_origem) {
		strcpy (uf_origem, _uf_origem);
	}

	void setAutorizacao (string _autorizacao) {
		strcpy (autorizacao, _autorizacao);
	}

	// GETTERS

	string getUFOrigem () {
		return uf_origem;
	}

	string getAutorizacao () {
		return autorizacao;
	}

	// CONSTRUTOR E DESTRUTOR

	AnimalNativo::AnimalNativo (string _autorizacao_ibama, string _uf_origem, string _autorizacao) {
		strcpy (autorizacao_ibama, _autorizacao_ibama);
		strcpy (uf_origem, _uf_origem);
		strcpy (autorizacao, _autorizacao);
	}

	AnimalNativo::~AnimalNativo () {}

// ANIMAL EXÓTICO

	// SETTER

	void setPaisOrigem (string _pais_origem) {
		strcpy (pais_origem, _pais_origem);
	}

	// GETTER

	string getPaisOrigem () {
		return pais_origem;
	}

	// CONSTRUTOR E DESTRUTOR

	AnimalExotico::AnimalExotico (string _autorizacao_ibama, string _pais_origem) {
		strcpy (autorizacao_ibama, _autorizacao_ibama);
		strcpy (pais_origem, _pais_origem);

	}

	AnimalExotico::~AnimalExotico () {}

// ANFÍBIO

	// SETTERS

	void setTotalDeMudas (int _total_de_mudas) {
		total_de_mudas = _total_de_mudas;
	}

	void setUltimaMuda (string _ultima_muda) {
		strcpy (ultima_muda, _ultima_muda);
	}

	// GETTERS

	int getTotalDeMudas () {
		return total_de_mudas;
	}

	string getUltimaMuda () {
		return ultima_muda;
	}

	// CONSTRUTOR E DESTRUTOR

	Anfibio::Anfibio (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, int _total_de_mudas, string _ultima_muda) {
		id = _id;
		strcpy (classe, _classe);
		strcpy (nome_animal, _nome_animal);
	 	strcpy (nome_cientifico, _nome_cientifico);
	 	sexo = _sexo;
	 	tamanho = _tamanho;
	 	strcpy (dieta, _dieta);
	 	veterinario = int _veterinario;
	 	tratador = int _tratador;
	 	strcpy (nome_batismo, _nome_batismo);
	 	total_de_mudas = _total_de_mudas;
	 	strcpy (ultima_muda, _ultima_muda);
	}

	Anfibio::~Anfibio () {}

// ANFÍBIO NATIVO

	AnfibioNativo::AnfibioNativo (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, int _total_de_mudas, string _ultima_muda, string _autorizacao_ibama, string _uf_origem, string _autorizacao) {
		id = _id;
		strcpy (classe, _classe);
		strcpy (nome_animal, _nome_animal);
	 	strcpy (nome_cientifico, _nome_cientifico);
	 	sexo = _sexo;
	 	tamanho = _tamanho;
	 	strcpy (dieta, _dieta);
	 	veterinario = int _veterinario;
	 	tratador = int _tratador;
	 	strcpy (nome_batismo, _nome_batismo);
	 	total_de_mudas = _total_de_mudas;
	 	strcpy (ultima_muda, _ultima_muda);
		strcpy (autorizacao_ibama, _autorizacao_ibama);
		strcpy (uf_origem, _uf_origem);
		strcpy (autorizacao, _autorizacao);
	}

	AnfibioNativo::~AnfibioNativo () {}

// ANFÍBIO EXÓTICO

	AnfibioExotico::AnfibioExotico (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, int _total_de_mudas, string _ultima_muda, string _autorizacao_ibama, string _pais_origem) {
		id = _id;
		strcpy (classe, _classe);
		strcpy (nome_animal, _nome_animal);
	 	strcpy (nome_cientifico, _nome_cientifico);
	 	sexo = _sexo;
	 	tamanho = _tamanho;
	 	strcpy (dieta, _dieta);
	 	veterinario = int _veterinario;
	 	tratador = int _tratador;
	 	strcpy (nome_batismo, _nome_batismo);
	 	total_de_mudas = _total_de_mudas;
	 	strcpy (ultima_muda, _ultima_muda);
		strcpy (autorizacao_ibama, _autorizacao_ibama);
		strcpy (pais_origem, _pais_origem);
	}

	AnfibioExotico::~AnfibioExotico () {}

// AVE

	// SETTERS

	void setTamanhoDoBicoCm (double _tamanho_do_bico_cm) {
		tamanho_do_bico_cm = _tamanho_do_bico_cm;
	}

	void setEnvergaduraDasAsas (double _envergadura_das_asas) {
		envergadura_das_asas = _envergadura_das_asas;
	}

	// GETTERS

	double getTamanhoDoBicoCm () {
		return tamanho_do_bico_cm;
	}

	double getEnvergaduraDasAsas () {
		return envergadura_das_asas;
	}

	// CONSTRUTOR E DESTRUTOR

	Ave::Ave (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, double _tamanho_do_bico_cm, double _envergadura_das_asas) {
		id = _id;
		strcpy (classe, _classe);
		strcpy (nome_animal, _nome_animal);
	 	strcpy (nome_cientifico, _nome_cientifico);
	 	sexo = _sexo;
	 	tamanho = _tamanho;
	 	strcpy (dieta, _dieta);
	 	veterinario = int _veterinario;
	 	tratador = int _tratador;
	 	strcpy (nome_batismo, _nome_batismo);
	 	tamanho_do_bico_cm = _tamanho_do_bico_cm;
	 	envergadura_das_asas = _envergadura_das_asas;
	}

	Ave::~Ave () {}

// AVE NATIVO

	AveNativo::AveNativo (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, double _tamanho_do_bico_cm, double _envergadura_das_asas, string _autorizacao_ibama, string _uf_origem, string _autorizacao) {
		id = _id;
		strcpy (classe, _classe);
		strcpy (nome_animal, _nome_animal);
	 	strcpy (nome_cientifico, _nome_cientifico);
	 	sexo = _sexo;
	 	tamanho = _tamanho;
	 	strcpy (dieta, _dieta);
	 	veterinario = int _veterinario;
	 	tratador = int _tratador;
	 	strcpy (nome_batismo, _nome_batismo);
	 	tamanho_do_bico_cm = _tamanho_do_bico_cm;
	 	envergadura_das_asas = _envergadura_das_asas;
	 	strcpy (autorizacao_ibama, _autorizacao_ibama);
		strcpy (uf_origem, _uf_origem);
		strcpy (autorizacao, _autorizacao);
	}
	
	AveNativo::~AveNativo () {}
	
// AVE EXÓTICO

	AveExotico::AveExotico (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, double _tamanho_do_bico_cm, double _envergadura_das_asas, string _autorizacao_ibama, string _pais_origem) {
		id = _id;
		strcpy (classe, _classe);
		strcpy (nome_animal, _nome_animal);
	 	strcpy (nome_cientifico, _nome_cientifico);
	 	sexo = _sexo;
	 	tamanho = _tamanho;
	 	strcpy (dieta, _dieta);
	 	veterinario = int _veterinario;
	 	tratador = int _tratador;
	 	strcpy (nome_batismo, _nome_batismo);
	 	tamanho_do_bico_cm = _tamanho_do_bico_cm;
	 	envergadura_das_asas = _envergadura_das_asas;
		strcpy (autorizacao_ibama, _autorizacao_ibama);
		strcpy (pais_origem, _pais_origem);
	}

	AveExotico::~AveExotico () {}

// MAMÍFERO

	// SETTER

	void setCorPelo (string _cor_pelo) {
		strcpy (cor_pelo, _cor_pelo);
	}

	// GETTER
	
	string getCorPelo () {
		return cor_pelo;
	}

	// CONSTRUTOR E DESTRUTOR

	Mamifero::Mamifero (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, string _cor_pelo) {
		id = _id;
		strcpy (classe, _classe);
		strcpy (nome_animal, _nome_animal);
	 	strcpy (nome_cientifico, _nome_cientifico);
	 	sexo = _sexo;
	 	tamanho = _tamanho;
	 	strcpy (dieta, _dieta);
	 	veterinario = int _veterinario;
	 	tratador = int _tratador;
	 	strcpy (nome_batismo, _nome_batismo);
	 	strcpy (cor_pelo, _cor_pelo);
	}

	Mamifero::~Mamifero () {}

// MAMÍFERO NATIVO

	MamiferoNativo::MamiferoNativo (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, string _cor_pelo, string _autorizacao_ibama, string _uf_origem, string _autorizacao) {
		id = _id;
		strcpy (classe, _classe);
		strcpy (nome_animal, _nome_animal);
	 	strcpy (nome_cientifico, _nome_cientifico);
	 	sexo = _sexo;
	 	tamanho = _tamanho;
	 	strcpy (dieta, _dieta);
	 	veterinario = int _veterinario;
	 	tratador = int _tratador;
	 	strcpy (nome_batismo, _nome_batismo);
	 	strcpy (cor_pelo, _cor_pelo);
		strcpy (autorizacao_ibama, _autorizacao_ibama);
		strcpy (uf_origem, _uf_origem);
		strcpy (autorizacao, _autorizacao);
	}

	MamiferoNativo::~MamiferoNativo () {}

// MAMÍFERO EXÓTICO

	MamiferoExotico::MamiferoExotico (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, string _cor_pelo, string _autorizacao_ibama, string _pais_origem) {
		id = _id;
		strcpy (classe, _classe);
		strcpy (nome_animal, _nome_animal);
	 	strcpy (nome_cientifico, _nome_cientifico);
	 	sexo = _sexo;
	 	tamanho = _tamanho;
	 	strcpy (dieta, _dieta);
	 	veterinario = int _veterinario;
	 	tratador = int _tratador;
	 	strcpy (nome_batismo, _nome_batismo);
	 	strcpy (cor_pelo, _cor_pelo);
		strcpy (autorizacao_ibama, _autorizacao_ibama);
		strcpy (pais_origem, _pais_origem);
	}

	MamiferoExotico::~MamiferoExotico () {}

// RÉPTIL

	// SETTERS

	void setVenenoso (bool _venenoso) {
		venenoso = _venenoso;
	}

	void setTipoVeneno (string _tipo_veneno) {
		tipo_veneno = _tipo_veneno;
	}

	// GETTERS

	bool getVenenoso () {
		return venenoso;
	}

	string getTipoVeneno () {
		return tipo_veneno;
	}

	// CONSTRUTOR E DESTRUTOR

	Reptil::Reptil (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, bool _venenoso, string _tipo_veneno) {
		id = _id;
		strcpy (classe, _classe);
		strcpy (nome_animal, _nome_animal);
	 	strcpy (nome_cientifico, _nome_cientifico);
	 	sexo = _sexo;
	 	tamanho = _tamanho;
	 	strcpy (dieta, _dieta);
	 	veterinario = int _veterinario;
	 	tratador = int _tratador;
	 	strcpy (nome_batismo, _nome_batismo);
	 	venenoso = _venenoso;
	 	strcpy (tipo_veneno, _tipo_veneno);
	}

	Reptil::~Reptil () {}

// RÉPTIL NATIVO

	ReptilNativo::ReptilNativo (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, bool _venenoso, string _tipo_veneno, string _autorizacao_ibama, string _uf_origem, string _autorizacao) {
		id = _id;
		strcpy (classe, _classe);
		strcpy (nome_animal, _nome_animal);
	 	strcpy (nome_cientifico, _nome_cientifico);
	 	sexo = _sexo;
	 	tamanho = _tamanho;
	 	strcpy (dieta, _dieta);
	 	veterinario = int _veterinario;
	 	tratador = int _tratador;
	 	strcpy (nome_batismo, _nome_batismo);
	 	venenoso = _venenoso;
	 	strcpy (tipo_veneno, _tipo_veneno);
		strcpy (autorizacao_ibama, _autorizacao_ibama);
		strcpy (uf_origem, _uf_origem);
		strcpy (autorizacao, _autorizacao);
	}

	ReptilNativo::~ReptilNativo () {}

// RÉPTIL EXÓTICO

	ReptilExotico::ReptilExotico (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, bool _venenoso, string _tipo_veneno, string _autorizacao_ibama, string _pais_origem) {
		id = _id;
		strcpy (classe, _classe);
		strcpy (nome_animal, _nome_animal);
	 	strcpy (nome_cientifico, _nome_cientifico);
	 	sexo = _sexo;
	 	tamanho = _tamanho;
	 	strcpy (dieta, _dieta);
	 	veterinario = int _veterinario;
	 	tratador = int _tratador;
	 	strcpy (nome_batismo, _nome_batismo);
	 	venenoso = _venenoso;
	 	strcpy (tipo_veneno, _tipo_veneno);
		strcpy (autorizacao_ibama, _autorizacao_ibama);
		strcpy (pais_origem, _pais_origem);
	}

ReptilExotico::~ReptilExotico () {}

//Sobrecarga de operadores

// Escrevendo no arquivo "anfibios_nat.txt".
ofstream& operator << (ofstream &out, ANFIBIO_NATIVO &anfNat){
	out << anfNat.getID() << ";" << anfNat.getClasse() << ";" << anfNat.getNomeAnimal() << ";" << anfNat.getNomeCientifico() << ";" << anfNat.getSexo() << ";" << anfNat.getTamanho() << ";" << anfNat.getDieta() << ";" << anfNat.getVeterinario() << ";" << anfNat.getTratador() << ";" << anfNat.getNomeBatismo() << ";" << anfNat.getTotalDeMudas() << ";" << anfNat.getUltimaMuda() << ";" << anfNat.getAutorizacaoIBAMA() << ";" << anfNat.getUFOrigem() << ";" << anfNat.getAutorizacao() << ";" << '\n';
	return out;
}

// Escrevendo no arquivo "anfibios_ex.txt".
ofstream& operator << (ofstream &out, ANFIBIO_EXOTICO &anfExo){
	out << anfExo.getID() << ";" << anfExo.getClasse() << ";" << anfExo.getNomeAnimal() << ";" << anfExo.getNomeCientifico() << ";" << anfExo.getSexo() << ";" << anfExo.getTamanho() << ";" << anfExo.getDieta() << ";" <<	anfExo.getVeterinario() << ";" << anfExo.getTratador() << ";" << anfExo.getNomeBatismo() << ";" << anfExo.getTotalDeMudas() << ";" << anfExo.getUltimaMuda() << ";" << anfExo.getAutorizacaoIBAMA() << ";" << anfExo.getPaisOrigem() << ";" << anfExo.getAutorizacao() << ";" << '\n';
	return out;
}


// Escrevendo no arquivo "aves_nat.txt".
ofstream& operator << (ofstream &out, AVE_NATIVO &aveNat){
	out << aveNat.getID() << ";" << aveNat.getClasse() << ";" << aveNat.getNomeAnimal() << ";" << aveNat.getNomeCientifico() << ";" << aveNat.getSexo() << ";" << aveNat.getTamanho() << ";" << aveNat.getDieta() << ";" << aveNat.getVeterinario() << ";" << aveNat.getTratador() << ";" << aveNat.getNomeBatismo() << ";"  << aveNat.getTamanhoBico() << ";" << aveNat.getEnvergadura() << ";" << aveNat.getAutorizacaoIBAMA() << ";" << aveNat.getUFOrigem() << ";" << aveNat.getAutorizacao() << ";" << '\n';
	return out;
}

// Escrevendo no arquivo "aves_ex.txt".
ofstream& operator << (ofstream &out, AVE_EXOTICO &aveExo){
	out << aveExo.getID() << ";" << aveExo.getClasse() << ";" << aveExo.getNomeAnimal() << ";" << aveExo.getNomeCientifico() << ";" << aveExo.getSexo() << ";" << aveExo.getTamanho() << ";" << aveExo.getDieta() << ";" << aveExo.getVeterinario() << ";" << aveExo.getTratador() << ";" << aveExo.getNomeBatismo() << ";"  << aveExo.getTamanhoBico() << ";" << aveExo.getEnvergadura() << ";" << aveExo.getAutorizacaoIBAMA() << ";" << aveExo.getPaisOrigem() << ";" << aveExo.getAutorizacao() << ";" << '\n';
	return out;
}


// Escrevendo no arquivo "mamiferos_nat.txt".
ofstream& operator << (ofstream &out, MAMIFERO_NATIVO &mamNat){
	out << mamNat.getID() << ";" << mamNat.getClasse() << ";"  << mamNat.getNomeAnimal() << ";" << mamNat.getNomeCientifico() << ";" << mamNat.getSexo() << ";" << mamNat.getTamanho() << ";" << mamNat.getDieta() << ";" << mamNat.getVeterinario() << ";" << mamNat.getTratador() << ";" << mamNat.getNomeBatismo() << ";"  << mamNat.getCorPelo() << ";" << mamNat.getAutorizacaoIBAMA() << ";" << mamNat.getUFOrigem() << ";" << mamNat.getAutorizacao() << ";" << '\n';
	return out;
}

// Escrevendo no arquivo "mamiferos_ex.txt".
ofstream& operator << (ofstream &out, MAMIFERO_EXOTICO &mamExo){
	out << mamExo.getID() << ";" << mamExo.getClasse() << ";" << mamExo.getNomeAnimal() << ";" << mamExo.getNomeCientifico() << ";" << mamExo.getSexo() << ";" << mamExo.getTamanho() << ";" << mamExo.getDieta() << ";" << mamExo.getVeterinario() << ";" << mamExo.getTratador() << ";" << mamExo.getNomeBatismo() << ";"  << mamExo.getCorPelo() << ";" << mamExo.getAutorizacaoIBAMA() << ";" << mamExo.getPaisOrigem() << ";" << mamExo.getAutorizacao() << ";" << '\n';
	return out;
}


// Escrevendo no arquivo "repteis_nat.txt".
ofstream& operator << (ofstream &out, REPTIL_NATIVO &repNat){
	out << repNat.getID() << ";" << repNat.getClasse() << ";" << repNat.getNomeAnimal() << ";" << repNat.getNomeCientifico() << ";" << repNat.getSexo() << ";" << repNat.getTamanho() << ";" << repNat.getDieta() << ";" << repNat.getVeterinario() << ";" << repNat.getTratador() << ";" << repNat.getNomeBatismo() << ";"  << repNat.getVenenoso() <<  ";" << repNat.getTipoVeneno()  << ";" << repNat.getAutorizacaoIBAMA() << ";" << repNat.getUFOrigem() << ";" << repNat.getAutorizacao() << ";" << '\n';
	return out;
}

// Escrevendo no arquivo "repteis_ex.txt".
ofstream& operator << (ofstream &out, REPTIL_EXOTICO &repExo){
	out << repExo.getID() << ";" << repExo.getClasse() << ";" << repExo.getNomeAnimal() << ";" << repExo.getNomeCientifico() << ";" << repExo.getSexo() << ";" << repExo.getTamanho() << ";" << repExo.getDieta() << ";" << repExo.getVeterinario() << ";" << repExo.getTratador() << ";" << repExo.getNomeBatismo() << ";"  << repExo.getVenenoso() <<  ";" << repExo.getTipoVeneno()  << ";" << repExo.getAutorizacaoIBAMA() << ";" << repExo.getPaisOrigem() << ";" << repExo.getAutorizacao() << ";" << '\n';
	return out;
}


//Escrevendo no arquivo "veterinarios.txt"
ofstream& operator << (ofstream &out, VETERINARIO &vet){
	out << vet.getID() << ";" << vet.getNome() << ";" <<vet.getCPF() << ";" <<vet.getIdade() << ";" <<vet.getTipoSanguineo() << ";" <<vet.getFatorRH() << ";" <<vet.getEspecialidade() << ";" <<vet.getCRMV() << ";" << '\n';
	return out;
}

// Escrevendo no arquivo "tratadores.txt".
ofstream& operator << (ofstream &out, TRATADOR &trat){
	out << trat.getID() << ";" << trat.getNome() << ";" << trat.getCPF() << ";" << trat.getIdade() << ";" << trat.getTipoSanguineo() << ";" << trat.getFatorRH() << ";" << trat.getEspecialidade() << ";" << trat.getNivelDeSeguranca() << ";" << '\n';
	return out;
}
