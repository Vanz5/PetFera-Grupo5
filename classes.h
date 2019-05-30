#ifndef CLASSES_PETFERA
#define CLASSES_PETFERA

#include<iostream>
#include<cstring>

using namespace std;

// CLASSES DOS ANIMAIS (ANIMAL, ANIMAL SILVESTRE, ANIMAL NATIVO E ANIMAL EXÓTICO)

	class Animal {
		protected:
			int id;
			string classe;
			string nome_animal;
			string nome_cientifico;
			char sexo;
			double tamanho;
			string dieta;
			int veterinario;
			int tratador;
			string nome_batismo;

		public:
			// GETTERS

			virtual int getId() = 0;
			string getClasse();
			string getNomeAnimal();
			string getNomeCientifico();
			char getSexo();
			double getTamanho();
			string getDieta();
			int getVeterinario();
			int getTratador();
			string getNomeBatismo();

			// CONSTRUTORES E DESTRUTOR

			Animal(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo);
			~Animal();
	};

	class AnimalSilvestre {
		protected:
			string autorizacao_ibama;

		public:
			virtual string getAutorizacaoIBAMA() = 0;

			// CONSTRUTOR E DESTRUTOR
			AnimalSilvestre(string _autorizacao_ibama);
			~AnimalSilvestre();
	};
	
	//class ANIMAL_NATIVO: public ANIMAL, ANIMAL_SILVESTRE{
	class AnimalNativo: public Animal, AnimalSilvestre {
		protected:
			string uf_origem;
			string autorizacao;

		public:
			// GETTERS
			virtual int getId() = 0;
			string getUFOrigem();
			string getAutorizacao();
			string getAutorizacaoIBAMA();

			// CONSTRUTOR E DESTRUTOR
			AnimalNativo(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, string _autorizacao_ibama, string _uf_origem, string _autorizacao);
			~AnimalNativo();
	};

	class AnimalExotico : public Animal, AnimalSilvestre{
		protected:
			string pais_origem;
			string autorizacao;

		public:
			// GETTER
			virtual int getId() = 0;
			string getPaisOrigem();
			string getAutorizacao();
			string getAutorizacaoIBAMA();

			// CONSTRUTOR E DESTRUTOR

			AnimalExotico(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, string _autorizacao_ibama, string _pais_origem, string _autorizacao);
			~AnimalExotico();
	};
	
	//Conseguimos implementar as classes funcionando até esse ponto

// CLASSES DOS ANFÍBIOS (ANFÍBIO, ANFÍBIO NATIVO E ANFÍBIO EXÓTICO)

	class Anfibio : public Animal{
		protected:
			int total_de_mudas;
			string ultima_muda;

		public:
			// GETTERS

			int getTotalDeMudas();
			string getUltimaMuda();

			// CONSTRUTORES E DESTRUTOR

		//Anfibio(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, string _nome_batismo, int _total_de_mudas, string _ultima_muda);
			~Anfibio();
	};

	class AnfibioNativo : public Anfibio, AnimalNativo{
		public:
			//AnfibioNativo(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, string _nome_batismo, int _total_de_mudas, string _ultima_muda, string _autorizacao_ibama, string _uf_origem, string _autorizacao);
			~AnfibioNativo();

		//friend ofstream& operator << (ofstream &out, AnfibioNativo &anfNat);	
	};

	class AnfibioExotico : public Anfibio, AnimalExotico{
		public:
			//AnfibioExotico(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, string _nome_batismo, int _total_de_mudas, string _ultima_muda, string _autorizacao_ibama, string _pais_origem);
			~AnfibioExotico();

		//friend ofstream& operator << (ofstream &out, AnfibioExotico &anfExo);	
	};

// CLASSES DAS AVES (AVE, AVE NATIVO E AVE EXÓTICO)

	class Ave : public Animal {
		protected:
			double tamanho_do_bico_cm;
			double envergadura_das_asas;

		public:
			// GETTERS
			double getTamanhoDoBicoCm();
			double getEnvergaduraDasAsas();

			// CONSTRUTORES E DESTRUTOR

			//Ave(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, string _nome_batismo);
			~Ave();
	};

	class AveNativo : public Ave, AnimalNativo {
		public:
			//AveNativo(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, string _nome_batismo, double _tamanho_do_bico_cm, double _envergadura_das_asas, string _autorizacao_ibama, string _uf_origem, string _autorizacao);
			~AveNativo();
		
		//friend ofstream& operator << (ofstream &out, AveNativo &aveNat);
	};

	class AveExotico : public Ave, AnimalExotico{
		public:
			//AveExotico(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, string _nome_batismo, double _tamanho_do_bico_cm, double _envergadura_das_asas, string _autorizacao_ibama, string _pais_origem);
			~AveExotico();
	
		//friend ofstream& operator << (ofstream &out, AveExotico &aveExo);
	};

// CLASSES DOS MAMÍFEROS (MAMÍFERO, MAMÍFERO NATIVO E MAMÍFERO EXÓTICO)

	class Mamifero : public Animal{
		protected:
			string cor_pelo;

		public:
			// GETTER
			string getCorPelo();

			// CONSTRUTORES E DESTRUTOR	

			//Mamifero(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, string _nome_batismo);
			~Mamifero();
	};

	class MamiferoNativo : public Mamifero, AnimalNativo{
		public:
			//MamiferoNativo(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, string _nome_batismo, string _cor_pelo, string _autorizacao_ibama, string _uf_origem, string _autorizacao);
			~MamiferoNativo();

		//friend ofstream& operator << (ofstream &out, MamiferoNativo &mamNat);
	};

	class MamiferoExotico : public Mamifero, AnimalExotico {
		public:
			//MamiferoExotico(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, string _nome_batismo, string _cor_pelo, string _autorizacao_ibama, string _pais_origem);
			~MamiferoExotico();

		//friend ofstream& operator << (ofstream &out, MamiferoExotico &mamExo);
	};

// CLASSES DOS RÉPTEIS (RÉPTIL, RÉPTIL NATIVO E RÉPTIL EXÓTICO)

	class Reptil : public Animal{
		protected:
			bool venenoso;
			string tipo_veneno;

		public:
			// GETTERS

			bool getVenenoso();
			string getTipoVeneno();

			// CONSTRUTORES E DESTRUTOR

			Reptil(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, string _nome_batismo);
			~Reptil();
	};

	class ReptilNativo : public Reptil, AnimalNativo{
		public:
			//ReptilNativo(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, string _nome_batismo, bool _venenoso, string _tipo_veneno, string _autorizacao_ibama, string _uf_origem, string _autorizacao);
			~ReptilNativo();

		//friend ofstream& operator << (ofstream &out, ReptilNativo &repNat);
	};

	class ReptilExotico : public Reptil, AnimalExotico{
		public:
			//ReptilExotico(int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, string _nome_batismo, bool _venenoso, string _tipo_veneno, string _autorizacao_ibama, string _pais_origem);
			~ReptilExotico();

		//friend ofstream& operator << (ofstream &out, ReptilExotico &repExo);
	};

	/*
	Até aqui as classes estavam compilando, mas não conseguimos inicializar os constrtores.
	As classes funcionario, veterinario e tratador estão apresentando problema e não conseguimos resolver.
	*/

// CLASSES DOS FUNCIONÁRIOS (FUNCIONÁRIO, TRATADOR E VETERINÁRIO)
	/*
	class Funcionario {
		private:
			int id;
			string nome;
			string cpf;
			short int idade;
			string tipo_sanguineo;
			char fator_rh;
			string especialidade;

		public:
			// GETTERS

			int getId();
			string getNome ();
			string getCPF ();
			short int getIdade ();
			string getTipoSanguineo ();
			char getFatorRH ();
			string getEspecialidade ();
	};

	class Tratador : public Funcionario {
		private:
			int nivel_de_seguranca;

		public:
			// GETTERS

			int getID();
			int getNivelDeSeguranca ();

			// CONSTRUTORES E DESTRUTOR

			//Tratador (int _id, string _nome, string _cpf, short int _idade, string _tipo_sanguineo, char _fator_rh, string _especialidade, int _nivel_de_seguranca);
			//Tratador (Tratador &_tratador);
			~Tratador ();

			//friend ofstream& operator << (ofstream &out, Tratador &trat);
	};

	class Veterinario : public Funcionario {
		protected:
			string crmv;

		public:

			// SETTER

			void setCRMV (string _crmv);

			// GETTERS

			int getID();
			string getCRMV ();

			// CONSTRUTORES E DESTRUTOR

			//Veterinario (int _id, string _nome, string _cpf, short int _idade, string _tipo_sanguineo, char _fator_rh, string _especialidade, string _crmv);
			//Veterinario (Veterinario &_veterinario);
			~Veterinario ();

			//friend ofstream& operator << (ofstream &out, Veterinario &vet);
	};
	*/

#endif
