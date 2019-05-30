#ifndef FUNCOES_PETFERA
#define FUNCOES_PETFERA

// CADASTRAR

	// CADASTRAR ANIMAIS

		void CadastrarAnimal(map <int, AnfibioNativo> &anfNat, map <int, AnfibioExotico> &anfExo, map <int, AveNativo> &aveNat, map <int, AveExotico> &aveExo, map<int, MamiferoNativo> &mamNat, map <int, MamiferoExotico> &mamExo, map<int, ReptilNativo> &repNat, map<int, ReptilExotico> &repExo);
		void cadastrar(map <int, AnfibioNativo> &anfNat, map <int, AnfibioExotico> &anfExo);
		void cadastrar(map <int, AveNativo> &aveNat, map <int, AveExotico> &aveExo);
		void cadastrar(map <int, MamiferoNativo> &mamNat, map<int, MamiferoExotico> &mamExo);
		void cadastrar(map <int, ReptilNativo> &repNat, map<int, ReptilExotico> &repExo);

	// CADASTRAR FUNCIONÁRIOS

		void cadastrarFuncionario (map <int, Veterinario> &veterinarios, map <int, Tratador> &tratadores);
		void cadastrar(map <int, Veterinario> &veterinarios);
		void cadastrar( map <int, Tratador> &tratadores);

// CONSULTAR

	void consultarClasse(map <int,AnfibioNativo> &anfNat, map <int, AnfibioExotico> &anfExo, map <int, AveNativo> &aveNat, map <int, AveExotico> &aveExo, map <int, MamiferoNativo> &mamNat, map <int,MamiferoExotico> &mamExo, map <int, ReptilNativo> &repNat, map <int, ReptilExotico> &repExo);
	void consultar(map <int, AnfibioNativo> &anfNat, map <int, AnfibioExotico> &anfExo);
	void consultar(map <int, AveNativo> &aveNat, map <int, AveExotico> &aveExo);
	void consultar(map <int, MamiferoNativo> &mamNat, map <int, MamiferoExotico> &mamExo);
	void consultar(map <int, ReptilNativo> &repNat, map <int, ReptilExotico> &repExo);

// INICIALIZAR

	void inicializar(map<int,AnfibioNativo> &anfNat, map<int, AnfibioExotico> &anfExo, map<int, AveNativo> &aveNat, map<int, AveExotico> &aveExo, map<int, MamiferoNativo> &mamNat, map<int, MamiferoExotico> &mamExo, map<int, ReptilNativo> &repNat, map<int, ReptilExotico> &repExo,map <int, Veterinario> &veterinarios,map <int, Tratador> &tratadores);

#endif
