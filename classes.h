#ifndef CLASSES_PETFERA
#define CLASSES_PETFERA

#include <string>
#include <fstream>

using std::string;

// CLASSES DOS FUNCIONÁRIOS (FUNCIONÁRIO, TRATADOR E VETERINÁRIO)

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

			// SETTERS
			
			void setID (int _id);
			void setNome (string _nome);
			void setCPF (string _cpf);
			void setIdade (short int _idade);
			void setTipoSanguineo (string _tipo_sanguineo);
			void setFatorRH (char _fator_rh);
			void setEspecialidade (string _especialidade);

			// GETTERS

			virtual int getID () = 0;
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

			// SETTER

			void setNivelDeSeguranca (int _nivel_de_seguranca);

			// GETTERS

			int getID();
			int getNivelDeSeguranca ();

			// CONSTRUTORES E DESTRUTOR

			Tratador (int _id, string _nome, string _cpf, short int _idade, string _tipo_sanguineo, char _fator_rh, string _especialidade, int _nivel_de_seguranca);
			Tratador (Tratador &_tratador);
			~Tratador ();

			friend ofstream& operator << (ofstream &out, Tratador &trat);
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

			Veterinario (int _id, string _nome, string _cpf, short int _idade, string _tipo_sanguineo, char _fator_rh, string _especialidade, string _crmv);
			Veterinario (Veterinario &_veterinario);
			~Veterinario ();

			friend ofstream& operator << (ofstream &out, Veterinario &vet);
	};

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

			// SETTERS

			void setID (int _id);
			void setClasse (string _classe);
			void setNomeAnimal (string _nome_animal);
			void setNomeCientifico (string _nome_cientifico);
			void setSexo (char _sexo);
			void setTamanho (double _tamanho);
			void setDieta (string _dieta);
			void setVeterinario (int _veterinario);
			void setTratador (int _tratador);
			void setNomeBatismo (string _nome_batismo);

			// GETTERS

			int getID ();
			string getClasse ();
			string getNomeAnimal ();
			string getNomeCientifico ();
			char getSexo ();
			double getTamanho ();
			string getDieta ();
			int getVeterinario ();
			int getTratador ();
			string getNomeBatismo ();

			// CONSTRUTORES E DESTRUTOR

			Animal (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo);
			~Animal ();
	};

	class AnimalSilvestre {
		protected:
			string autorizacao_ibama;
		public:

			// SETTER

			void setAutorizacaoIBAMA (string _autorizacao_ibama);

			// GETTER

			string getAutorizacaoIBAMA ();

			// CONSTRUTOR E DESTRUTOR

			AnimalSilvestre (string _autorizacao_ibama);
			~AnimalSilvestre ();
	};

	class AnimalNativo : public AnimalSilvestre {
		protected:
			string uf_origem;
			string autorizacao;
		public:

			// SETTERS

			void setUFOrigem (string _uf_origem);
			void setAutorizacao (string _autorizacao);

			// GETTERS

			string getUFOrigem ();
			string getAutorizacao ();

			// CONSTRUTOR E DESTRUTOR

			AnimalNativo (string _autorizacao_ibama, string _uf_origem, string _autorizacao);
			~AnimalNativo ();
	};

	class AnimalExotico : public AnimalSilvestre {
		protected:
			string pais_origem;

		public:

			// SETTER

			void setPaisOrigem (string _pais_origem);

			// GETTER

			string getPaisOrigem ();

			// CONSTRUTOR E DESTRUTOR

			AnimalExotico (string _autorizacao_ibama, string _pais_origem);
			~AnimalExotico ();
	};

// CLASSES DOS ANFÍBIOS (ANFÍBIO, ANFÍBIO NATIVO E ANFÍBIO EXÓTICO)

	class Anfibio : public Animal {
		protected:
			int total_de_mudas;
			string ultima_muda;

		public:

			// SETTERS

			void setTotalDeMudas (int _total_de_mudas);
			void setUltimaMuda (string _ultima_muda);

			// GETTERS

			int getTotalDeMudas ();
			string getUltimaMuda ();

			// CONSTRUTORES E DESTRUTOR

			Anfibio (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, int _total_de_mudas, string _ultima_muda);
			~Anfibio ();
	};

	class AnfibioNativo : public Anfibio, AnimalNativo {
		public:
			AnfibioNativo (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, int _total_de_mudas, string _ultima_muda, string _autorizacao_ibama, string _uf_origem, string _autorizacao);
			~AnfibioNativo ();

		friend ofstream& operator << (ofstream &out, AnfibioNativo &anfNat);	
	};

	class AnfibioExotico : public Anfibio, AnimalExotico {
		public:
			AnfibioExotico (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, int _total_de_mudas, string _ultima_muda, string _autorizacao_ibama, string _pais_origem);
			~AnfibioExotico ();

		friend ofstream& operator << (ofstream &out, AnfibioExotico &anfExo);	
	};

// CLASSES DAS AVES (AVE, AVE NATIVO E AVE EXÓTICO)

	class Ave : public Animal {
		protected:
			double tamanho_do_bico_cm;
			double envergadura_das_asas;

		public:

			// SETTERS

			void setTamanhoDoBicoCm (double _tamanho_do_bico_cm);
			void setEnvergaduraDasAsas (double _envergadura_das_asas);

			// GETTERS

			double getTamanhoDoBicoCm ();
			double getEnvergaduraDasAsas ();

			// CONSTRUTORES E DESTRUTOR

			Ave (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo);
			~Ave ();
	};

	class AveNativo : public Ave, AnimalNativo {
		public:
			AveNativo (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, double _tamanho_do_bico_cm, double _envergadura_das_asas, string _autorizacao_ibama, string _uf_origem, string _autorizacao);
			~AveNativo ();
		
		friend ofstream& operator << (ofstream &out, AveNativo &aveNat);
	};

	class AveExotico : public Ave, AnimalExotico {
		public:
			AveExotico (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, double _tamanho_do_bico_cm, double _envergadura_das_asas, string _autorizacao_ibama, string _pais_origem);
			~AveExotico ();
	
		friend ofstream& operator << (ofstream &out, AveExotico &aveExo);
	};

// CLASSES DOS MAMÍFEROS (MAMÍFERO, MAMÍFERO NATIVO E MAMÍFERO EXÓTICO)

	class Mamifero : public Animal {
		protected:
			string cor_pelo;

		public:

			// SETTER

			void setCorPelo (string _cor_pelo);

			// GETTER
			
			string getCorPelo ();

			// CONSTRUTORES E DESTRUTOR	

			Mamifero (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo);
			~Mamifero ();
	};

	class MamiferoNativo : public Mamifero, AnimalNativo {
		public:
			MamiferoNativo (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, string _cor_pelo, string _autorizacao_ibama, string _uf_origem, string _autorizacao);
			~MamiferoNativo ();

		friend ofstream& operator << (ofstream &out, MamiferoNativo &mamNat);
	};

	class MamiferoExotico : public Mamifero, AnimalExotico {
		public:
			MamiferoExotico (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, string _cor_pelo, string _autorizacao_ibama, string _pais_origem);
			~MamiferoExotico ();

		friend ofstream& operator << (ofstream &out, MamiferoExotico &mamExo);
	};

// CLASSES DOS RÉPTEIS (RÉPTIL, RÉPTIL NATIVO E RÉPTIL EXÓTICO)

	class Reptil : public Animal {
		protected:
			bool venenoso;
			string tipo_veneno;

		public:

			// SETTERS

			void setVenenoso (bool _venenoso);
			void setTipoVeneno (string _tipo_veneno);

			// GETTERS

			bool getVenenoso ();
			string getTipoVeneno ();

			// CONSTRUTORES E DESTRUTOR

			Reptil (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo);
			~Reptil ();
	};

	class ReptilNativo : public Reptil, AnimalNativo {
		public:
			ReptilNativo (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, bool _venenoso, string _tipo_veneno, string _autorizacao_ibama, string _uf_origem, string _autorizacao);
			~ReptilNativo ();

		friend ofstream& operator << (ofstream &out, ReptilNativo &repNat);
	};

	class ReptilExotico : public Reptil, AnimalExotico {
		public:
			ReptilExotico (int _id, string _classe, string _nome_animal, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, int _veterinario, int _tratador, string _nome_batismo, bool _venenoso, string _tipo_veneno, string _autorizacao_ibama, string _pais_origem);
			~ReptilExotico ();

		friend ofstream& operator << (ofstream &out, ReptilExotico &repExo);
	};

#endif
