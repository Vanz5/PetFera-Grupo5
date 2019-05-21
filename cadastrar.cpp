//Adicionar includes necessarios

// Cadastro de Animais

//Cadastro geral de animais - Todos os tipos precisam passar por aqui
//Inicialmente deixei como vector no geral e nos especificos, possivel mudança pra map
void CadastrarAnimal(vector <anfibio_nativo> &anfNat, vector <anfibio_exotico> &anfExo, vector <ave_nativo> &aveNat, vector <ave_exotico> &aveExo, vector <mamifero_nativo> &mamNat, vector <mamifero_exotico> &mamExo, vector <reptil_nativo> &repNat, vector <reptil_exotico> &repExo ){ //adaptar para maps de animais
	int tipoAnimal;
	char cont = 's', resposta;

	while(cont=='s'){
		cout<< "Qual será o tipo do animal? \n 1 - anfíbio \n 2 - ave \n 3 - mamífero \n 4 - reptil" <<endl;
		cin>>tipoAnimal;

		if(tipoAnimal !=1 && tipoAnimal !=2 && tipoAnimal !=3 && tipoAnimal !=4){
			cout<<"Tipo de animal incorreto! \n"<<endl;
			cout<<"\n s - Para sair do cadastro \n Aperte qualquer outra tecla para recomeçar o cadastro de animal"<<endl;
			cin>>resp;
			if(resp == 's'){
				cont = 'n';
				break;
			}
			cont = 's';
			continue;
		}
		else{
			if(tipoAnimal == 1){
				cadastrar(anfNat,anfExo);
			}
			else if(tipoAnimal == 2){
				cadastrar(aveNat,aveExo);
			}
			else if(tipoAnimal == 3){
				cadastrar(mamNat,mamExo);
			}
			else if(tipoAnimal == 4){
				cadastrar(repNat,repExo);
			}
		}
	}
}

//Função especifica para cadastro de anfibios
void cadastrar(vector <anfibio_nativo> &anfNat, vector <anfibio_exotico> &anfExo){
	int id, totalMudas, ultimaMuda [3], tipoAnimal;
	string classe, nomeAnimal,nomeCientifico, dieta, veterinario, tratador, nomeBatismo, autorizacao, autorizacaoIBAMA, origem;
	char sexo, cont = 's';
	double tamanho;
	unsigned int tamAntigo

	while(cont == 's'){
		cout<<"O animal a ser cadastrado será um anfíbio nativo ou exotico? \n 1 - NATIVO \n 2 - EXOTICO"<<endl;
		cin>>tipoAnimal;
		if(tipoAnimal != 1 && tipoAnimal !=2){
			cout<<"Tipo de animal incorreto! Tente novamente! \n"<<endl;
			cont = 's';
			continue;
		}
		else{
			cont = 'n';

			cout<<"Insira o id:"<<endl;
			cin>>id;
			cout<<"Insira a classe:"<<endl;
			cin.ignore();
			getline(cin,classe);
			cout<<"Insira o nome do animal:"<<endl;
			getline(cin,nomeAnimal);
			cout<<"Insira o nome cientifico:"<<endl;
			getline(cin,nomeCientifico);
			cout<<"insira o sexo do animal:"<<endl;
			cin>>sexo;
			cout<<"Insira o tamanho do animal:"<<endl;
			cint>>tamanho;
			cout<<"Insira a dieta:"<<endl;
			getline(cin,dieta);
			cout<<"Insira o nome do veterinario:"<<endl;
			getline(cin,veterinario);
			cout<<"Insira o nome do tratador:"<<endl;
			getline(cin,tratador);
			cout<<"Insira o nome de batismo:"<<endl;
			getline(cin,nomeBatismo);
			cout<<"Insira o total de mudas:"<<endl;
			cin>>totalMudas;
			cout<<"Insira a data da ultima muda (DD/MM/AAAA):"<<endl;
			cin>>ultimaMuda[0]>>ultimaMuda[1]>>ultimaMuda[2];
			cout<<"Insira a autorizacao do IBAMA:"<<endl;
			cin.ignore();
			getline(cin,autorizacaoIBAMA);

			//Anfibios Nativos
			if(tipoAnimal==1){
				tamAntigo = anfNat.size();

				cout<<"Insira a UF de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);
				
				anfNat.insert(pair<int, anfibio_nativo>(id, anfibio_nativo(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, totalMudas, ultimaMuda[], autorizacaoIBAMA, origem, autorizacao)));

				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(anfNat.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/
			}
			//Anfibios Exoticos
			else{
				tamAntigo = anfExo.size();

				cout<<"Insira o País de origem:"<<endl;
				getline(cin,origem);
				//cout<<"Insira a autorizacao do animal:"<<endl;
				//getline(cin,autorizacao);
				
				anfExo.insert(pair<int, anfibio_exotico>(id, anfibio_exotico(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, totalMudas, ultimaMuda[], autorizacaoIBAMA, origem)));

				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(anfExo.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/

			}
		}
	}
}

//Função especifica para cadastro de aves
void cadastrar(vector <ave_nativo> &aveNat, vector <ave_exotico> &aveExo){
	int id;
	double tamBico, envergadura, tamanho;
	string classe, nomeAnimal, nomeCientifico, dieta, veterinario, tratador, nomeBatismo, autorizacao, autorizacaoIBAMA, origem;
	char sexo, tipoAnimal, cont = 's';
	unsigned int tamAntigo;

	while(cont == 's'){
		cout<<"O animal a ser cadastrado será uma ave nativa ou exotica? \n 1 - NATIVA \n 2 - EXOTICA"<<endl;
		cin>>tipoAnimal;
		if(tipoAnimal != 1 && tipoAnimal !=2){
			cout<<"Tipo de animal incorreto! Tente novamente! \n"<<endl;
			cont = 's';
			continue;
		}
		else{
			cont = 'n';

			cout<<"Insira o id:"<<endl;
			cin>>id;
			cout<<"Insira a classe:"<<endl;
			cin.ignore();
			getline(cin,classe);
			cout<<"Insira o nome do animal:"<<endl;
			getline(cin,nomeAnimal);
			cout<<"Insira o nome cientifico:"<<endl;
			getline(cin,nomeCientifico);
			cout<<"insira o sexo do animal:"<<endl;
			cin>>sexo;
			cout<<"Insira o tamanho do animal:"<<endl;
			cint>>tamanho;
			cout<<"Insira a dieta:"<<endl;
			getline(cin,dieta);
			cout<<"Insira o nome do veterinario:"<<endl;
			getline(cin,veterinario);
			cout<<"Insira o nome do tratador:"<<endl;
			getline(cin,tratador);
			cout<<"Insira o nome de batismo:"<<endl;
			getline(cin,nomeBatismo);
			cout<<"Insira o tamanho do bico:"<<endl;
			cin>>tamBico;
			cout<<"Insira a envergadura:"<<endl;
			cint>>envergadura;
			cout<<"Insira a autorizacao do IBAMA"<<endl;
			cin.ignore();
			getline(cin,autorizacaoIBAMA);

			//Aves Nativas
			if(tipoAnimal==1){
				tamAntigo = aveNat.size();

				cout<<"Insira a UF de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);
				
				aveNat.insert(pair<int, ave_nativo> (id, ave_nativo(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, tamBico, envergadura, autorizacaoIBAMA, origem, autorizacao)));
				
				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(aveNat.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/
			}
			//Aves Exoticas
			else{
				tamAntigo = aveExo.size();

				cout<<"Insira o País de origem:"<<endl;
				getline(cin,origem);
				//cout<<"Insira a autorizacao do animal:"<<endl;
				//getline(cin,autorizacao);
				
				aveExo.insert(pair<int,ave_exotico>(id, ave_exotico(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, tamBico, envergadura, autorizacaoIBAMA, origem)));
				
				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(aveExo.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/
			}
		}
	}
}

//Função especifica para cadastro de mamiferos
void cadastrar(vector <mamifero_nativo> &mamNat, vector <mamifero_exotico> &mamExo){
	int id;
	double tamanho;
	string classe, nomeAnimal, nomeCientifico, dieta, veterinario, tratador, nomeBatismo, autorizacao, autorizacaoIBAMA, origem, cor;
	char sexo, tipoAnimal, cont = 's';
	unsigned int tamAntigo;

	while(cont == 's'){
		cout<<"O animal a ser cadastrado será um mamifero nativo ou exotico? \n 1 - NATIVO \n 2 - EXOTICO"<<endl;
		cin>>tipoAnimal;
		if(tipoAnimal != 1 && tipoAnimal !=2){
			cout<<"Tipo de animal incorreto! Tente novamente! \n"<<endl;
			cont = 's';
			continue;
		}
		else{
			cont = 'n';

			cout<<"Insira o id:"<<endl;
			cin>>id;
			cout<<"Insira a classe:"<<endl;
			cin.ignore();
			getline(cin,classe);
			cout<<"Insira o nome do animal:"<<endl;
			getline(cin,nomeAnimal);
			cout<<"Insira o nome cientifico:"<<endl;
			getline(cin,nomeCientifico);
			cout<<"insira o sexo do animal:"<<endl;
			cin>>sexo;
			cout<<"Insira o tamanho do animal:"<<endl;
			cint>>tamanho;
			cout<<"Insira a dieta:"<<endl;
			getline(cin,dieta);
			cout<<"Insira o nome do veterinario:"<<endl;
			getline(cin,veterinario);
			cout<<"Insira o nome do tratador:"<<endl;
			getline(cin,tratador);
			cout<<"Insira o nome de batismo:"<<endl;
			getline(cin,nomeBatismo);
			cout<<"Insira a cor do pelo:"<<endl;
			cin.ignore();
			getline(cin,cor);
			cout<<"Insira a autorizacao do IBAMA"<<endl;
			cin.ignore();
			getline(cin,autorizacaoIBAMA);

			//Mamiferos Nativos
			if(tipoAnimal==1){
				tamAntigo = mamNat.size();

				cout<<"Insira a UF de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);

				mamNat.insert(pair<int, mamifero_nativo>(id, mamifero_nativo(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, cor, autorizacaoIBAMA, origem, autorizacao)));
				
				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(mamNat.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/
			}
			//Mamiferos Exoticos
			else{
				tamAntigo = mamExo.size();

				cout<<"Insira o País de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);

				mamExo.insert(pair<int, mamifero_exotico>(id, mamifero_exotico(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, cor, autorizacaoIBAMA, origem)));
				
				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(mamExo.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/
			}
		}
	}
}


//Função especifica para cadastro de Repteis
void cadastrar(vector <reptil_nativo> &repNat, vector <reptil_exotico> &repExo){
	int id;
	bool venenoso;
	double tamanho;
	string classe, nomeAnimal, nomeCientifico, dieta, veterinario, tratador, nomeBatismo, autorizacao, autorizacaoIBAMA, origem, tipoVeneno;
	char sexo, tipoAnimal, cont = 's';
	unsigned int tamAntigo;

	while(cont == 's'){
		cout<<"O animal a ser cadastrado será um reptil nativo ou exotico? \n 1 - NATIVO \n 2 - EXOTICO"<<endl;
		cin>>tipoAnimal;
		if(tipoAnimal != 1 && tipoAnimal !=2){
			cout<<"Tipo de animal incorreto! Tente novamente! \n"<<endl;
			cont = 's';
			continue;
		}
		else{
			cont = 'n';

			cout<<"Insira o id:"<<endl;
			cin>>id;
			cout<<"Insira a classe:"<<endl;
			cin.ignore();
			getline(cin,classe);
			cout<<"Insira o nome do animal:"<<endl;
			getline(cin,nomeAnimal);
			cout<<"Insira o nome cientifico:"<<endl;
			getline(cin,nomeCientifico);
			cout<<"insira o sexo do animal:"<<endl;
			cin>>sexo;
			cout<<"Insira o tamanho do animal:"<<endl;
			cint>>tamanho;
			cout<<"Insira a dieta:"<<endl;
			getline(cin,dieta);
			cout<<"Insira o nome do veterinario:"<<endl;
			getline(cin,veterinario);
			cout<<"Insira o nome do tratador:"<<endl;
			getline(cin,tratador);
			cout<<"Insira o nome de batismo:"<<endl;
			getline(cin,nomeBatismo);
			cout<<"Insira a autorizacao do IBAMA"<<endl;
			cin.ignore();
			getline(cin,autorizacaoIBAMA);
			cout<<"Insira 0 - não venenoso / 1 - para venenoso"<<endl;
			cin>>venenoso;
			if(venenoso){
				cout<<"Insira o tipo de veneno:"<<endl;
				cin>>tipoVeneno;
			}

			//Repteis Nativos
			if(tipoAnimal==1){
				tamAntigo = repNat.size();

				cout<<"Insira a UF de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);
				
				repNat.insert(pair<int, reptil_nativo>(id,reptil_nativo(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, autorizacaoIBAMA, venenoso, tipoVeneno, origem, autorizacao)));

				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(repNat.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/
			}
			//Repteis Exoticos
			else{
				tamAntigo = repExo.size();

				cout<<"Insira o País de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);

				repExo.insert(pair<int, reptil_exotico>(id, reptil_exotico(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, autorizacaoIBAMA, venenoso, tipoVeneno, origem)));
				
				//Armazenar pelo map - pesquisar

				/* teste se o cadastro foi feito
				if(repExo.size()==tamAntigo){
					cout<<"Falha no cadastro do animal! Tente novamente!"<<endl;
					cont = 's';
					continue;
				}*/
			}
		}
	}
}

//Cadastro de Funcionarios

//Função geral

//adaptar para map
void cadastrarFuncionario (map veterinario, map tratador){
	int tipoFuncionario;
	char cont = 's';

	while(cont == 's'){
		cout<<"O funcionario a ser cadastrado será um veterinario ou um tratador \n 1 - VETERINARIO \n 2 - TRATADOR"<<endl;
		cin>>tipoFuncionario;
		if(tipoFuncionario != 1 && tipoFuncionario !=2){
			cout<<"Tipo de funcionario incorreto! Tente novamente!"<<endl;
			cont = 's';
			continue;
		}
		else{
			if(tipoFuncionario == 1){
				cadastrar(veterinarios);
			}
			if(tipoFuncionario == 2){
				cadastrar(tratadores);
			}
		}
	}
}

//Função especifica para cadastro de Veterinarios

void cadastrar(map <int, Veterinarios> &veterinarios){
	int id,idade;
	long int cpf;
	string nome, especialidade, crmv, tipoSang;
	char fatorRH, cont = 's';
	unsigned int tamAntigo;
	tamAntigo = veterinarios.size(); // pegar o tamanho antigo do map veterinarios

	while(cont == 's'){
		cont = 'n';

		cout<<"Insira o id:"<<endl;
		cin>>id;
		cout<<"Insira a nome:"<<endl;
		cin.ignore();
		getline(cin,nome);
		cout<<"Insira o cpf:"<<endl;
		cin>>cpf;
		cout<<"Insira a idade:"<<endl;
		cin>>idade;
		cout<<"insira o tipo sanguinero:"<<endl;
		cin>>tipoSang;
		cout<<"Insira o fator RH:"<<endl;
		cint>>fatorRH;
		cout<<"Insira a especialidade:"<<endl;
		cin.ignore;
		getline(cin,especialidade);
		cout<<"Insira o crmv:"<<endl;
		getline(cin,crmv);
		
		//confirmar se veterinarios tem nivel de segurança

		//Armazenar pelo map - pesquisar
	}
	veterinarios.insert(pair<int, veterinarios>(id, veterinarios(id, nome, cpf, idade, tipoSang, fatorRH, especialidade, crmv)));
}

//Função especifica para cadastro de Tratadores

void cadastrar(map tratadores){
	int id,idade, nivelSeg;
	long int cpf;
	string nome, especialidade, tipoSang;
	char fatorRH, cont = 's';
	unsigned int tamAntigo;
	tamAntigo = tratadores.size(); // pegar o tamanho antigo do map veterinarios

	while(cont == 's'){
		cont = 'n';

		cout<<"Insira o id:"<<endl;
		cin>>id;
		cout<<"Insira a nome:"<<endl;
		cin.ignore();
		getline(cin,nome);
		cout<<"Insira o cpf:"<<endl;
		cin>>cpf;
		cout<<"Insira a idade:"<<endl;
		cin>>idade;
		cout<<"insira o tipo sanguinero:"<<endl;
		cin>>tipoSang;
		cout<<"Insira o fator RH:"<<endl;
		cint>>fatorRH;
		cout<<"Insira a especialidade:"<<endl;
		cin.ignore;
		getline(cin,especialidade);
		cout<<"Insira o nivel de segurança do tratador:"<<endl;
		cin>>nivelSeg;
		
		//Armazenar pelo map - pesquisar
	}
	tratadores.insert(pair<int, tratador>(id, tratador(id, nome cpf, idade, tipoSang, fatorRH, especialidade, nivelSeg)));
}
