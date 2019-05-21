//Adicionar includes necessarios
#include "classes.h"

// Cadastro de Animais

//Cadastro geral de animais - Todos os tipos precisam passar por aqui
//Inicialmente deixei como vector no geral e nos especificos, possivel mudança pra map
void CadastrarAnimal(map <int, AnfibioNativo> &anfNat, map <int, AnfibioExotico> &anfExo, map <int, AveNativo> &aveNat, map <int, AveExotico> &aveExo, map<int, MamiferoNativo> &mamNat, map <int, MamiferoExotico> &mamExo, map<int, ReptilNativo> &repNat, map<int, ReptilExotico> &repExo){ //adaptar para maps de animais
	int tipoAnimal;
	char cont = 's', resposta;

	while(cont=='s'){
		cout << "Digite o tipo do animal?" << endl;
		cout << "1 - anfíbio" << endl;
		cout << "2 - ave" << endl;
		cout << "3 - mamífero" << endl;
		cout << "4 - reptil" <<endl;
		cin >> tipoAnimal;

		if(tipoAnimal == 1 || tipoAnimal == 2 || tipoAnimal == 3 || tipoAnimal == 4){
			switch(tipoAnimal){
				case 1:
					cadastrar(anfNat,anfExo);
				case 2:
					cadastrar(aveNat,aveExo);
				case 3;
					cadastrar(mamNat,mamExo);
				case 4:
					cadastrar(repNat,repExo);
			}
		}
		else{
			cout<<"Erro, tipo de animal incorreto! \n"<<endl;
			cout<<"\n s - Para sair do cadastro \n Aperte qualquer outra tecla para recomeçar o cadastro de animal"<<endl;
			cin>>resposta;

			if(resp == 's'){
				cont = 'n';
				break;
			}
			cont = 's';
			continue;
		}
	}

}

//Função especifica para cadastro de anfibios
void cadastrar(map <int, AnfibioNativo> &anfNat, map <int, AnfibioExotico> &anfExo){
	int id, totalMudas, tipoAnimal, veterinario, tratador;
	string classe, nomeAnimal,nomeCientifico, dieta, nomeBatismo, autorizacao, autorizacaoIBAMA, origem, ultimaMuda;
	char sexo, cont = 's';
	double tamanho;
	unsigned int tamAntigo;

	while(cont == 's'){
		cout << "O animal a ser cadastrado será um anfíbio nativo ou exotico?" << endl;
		cout << "1 - NATIVO" << endl; 
		cout << "2 - EXOTICO" << endl;
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
			cin>>veterinario;
			cout<<"Insira o nome do tratador:"<<endl;
			cin>>tratador;
			cout<<"Insira o nome de batismo:"<<endl;
			getline(cin,nomeBatismo);
			cout<<"Insira o total de mudas:"<<endl;
			cin>>totalMudas;
			cout<<"Insira a data da ultima muda (DD/MM/AAAA):"<<endl;
			getline(cin,ultimaMuda);
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

				anfNat.insert(pair<int, AnfibioNativo>(id, AnfibioNativo(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, totalMudas, ultimaMuda[], autorizacaoIBAMA, origem, autorizacao)));
				
			}
			//Anfibios Exoticos
			else{
				tamAntigo = anfExo.size();

				cout<<"Insira o País de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);

				anfExo.insert(pair<int, AnfibioExotico>(id, AnfibioExotico(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, totalMudas, ultimaMuda[], autorizacaoIBAMA, origem, autorizacao)));

			}
		}
	}

	if(anfNat.empty()){
		cout <<  "Erro, ao inserir animal em 'anfibiosNativos.txt'"<<endl;
	}else{
		anfNativos.open("anfibiosNativos.txt");
		for(auto it = anfNat.begin(); it != anfNat.end(); it++){
			anfNativos << (*it).second; //sobrecarregar operador de inserção para inserir o objeto no arquivo
		}	
		anfNativos.close();
	}

	if(anfExo.empty()){
		cout <<  "Erro, ao inserir animal em 'anfibiosExoticos.txt'"<<endl;
	}else{
		anfExoticos.open("anfibiosExoticos.csv");
		for(auto it = anfExo.begin(); it != anfExo.end(); it++){
			anfExoticos << (*it).second; //sobrecarregar operador de inserção para inserir o objeto no arquivo
		}
		anfExoticos.close();
	}
}

//Função especifica para cadastro de aves
void cadastrar(map <int, AveNativo> &aveNat, map <int, AveExotico> &aveExo){
	int id, veterinario, tratador;
	double tamBico, envergadura, tamanho;
	string classe, nomeAnimal, nomeCientifico, dieta, nomeBatismo, autorizacao, autorizacaoIBAMA, origem;
	char sexo, tipoAnimal, cont = 's';
	unsigned int tamAntigo;

	while(cont == 's'){
		cout << "O animal a ser cadastrado será uma ave nativa ou exotica?" << endl;
		cout << "1 - NATIVA" << endl;
		cout << "2 - EXOTICA" << endl;
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
			cin>>veterinario;
			cout<<"Insira o nome do tratador:"<<endl;
			cin>>tratador;
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

				aveNat.insert(pair<int, AveNativo> (id, AveNativo(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, tamBico, envergadura, autorizacaoIBAMA, origem, autorizacao)));
	
			}
			//Aves Exoticas
			else{
				tamAntigo = aveExo.size();

				cout<<"Insira o País de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);

				aveExo.insert(pair<int, AveExotico>(id, AveExotico(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, tamBico, envergadura, autorizacaoIBAMA, origem, autorizacao)));
				
			}
		}
	}

	if(aveNat.empty()){
		cout <<  "Erro, ao inserir animal em 'avesNativas.txt'"<<endl;
	}else{
		avesNativas.open("avesNativas.txt");
		for(auto it = aveNat.begin(); it != aveNat.end(); it++){
			aveNativas << (*it).second; //sobrecarregar operador de inserção para inserir o objeto no arquivo
		}	
		avesNativas.close();
	}

	if(aveExo.empty()){
		cout <<  "Erro, ao inserir animal em 'avesExoticas.txt'"<<endl;
	}else{
		avesExoticas.open("avesExoticas.txt");
		for(auto it = aveExo.begin(); it != aveExo.end(); it++){
			avesExoticas << (*it).second; //sobrecarregar operador de inserção para inserir o objeto no arquivo
		}
		avesExoticas.close();
	}
}

//Função especifica para cadastro de mamiferos
void cadastrar(map <int, MamiferoNativo> &mamNat, map<int, MamiferoExotico> &mamExo){
	int id, veterinario, tratador;
	double tamanho;
	string classe, nomeAnimal, nomeCientifico, dieta, nomeBatismo, autorizacao, autorizacaoIBAMA, origem, cor;
	char sexo, tipoAnimal, cont = 's';
	unsigned int tamAntigo;

	while(cont == 's'){
		cout << "O animal a ser cadastrado será um mamifero nativo ou exotico?" << endl;
		Cout << "1 - NATIVO" << endl;
		cout << "2 - EXOTICO" << endl;
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
			cin>>veterinario;
			cout<<"Insira o nome do tratador:"<<endl;
			cin>>tratador;
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

				mamNat.insert(pair<int, MamiferoNativo>(id, MamiferoNativo(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, cor, autorizacaoIBAMA, origem, autorizacao)));
			
			}
			//Mamiferos Exoticos
			else{
				tamAntigo = mamExo.size();

				cout<<"Insira o País de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);

				mamExo.insert(pair<int, MamiferoExotico>(id, MamiferoExotico(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, cor, autorizacaoIBAMA, origem, autorizacao)));

			}
		}
	}

	if(mamNat.empty()){
		cout <<  "Erro, ao inserir animal em 'mamiferosNativos.txt'"<<endl;
	}else{
		mamNativos.open("mamiferosNativos.txt");
		for(auto it = mamNat.begin(); it != mamNat.end(); it++){
			mamNativos << (*it).second; //sobrecarregar operador de inserção para inserir o objeto no arquivo
		}	
		mamNativos.close();
	}

	if(mamExo.empty()){
		cout <<  "Erro, ao inserir animal em 'mamiferosExoticos.txt'"<<endl;
	}else{
		mamExoticos.open("mamiferosExoticos.txt");
		for(auto it = mamExo.begin(); it != mamExo.end(); it++){
			mamExoticos << (*it).second; //sobrecarregar operador de inserção para inserir o objeto no arquivo
		}
		mamExoticos.close();
	}
}


//Função especifica para cadastro de Repteis
void cadastrar(map <int, ReptilNativo> &repNat, map<int, ReptilExotico> &repExo){
	int id, veterinario, tratador;
	bool venenoso;
	double tamanho;
	string classe, nomeAnimal, nomeCientifico, dieta, nomeBatismo, autorizacao, autorizacaoIBAMA, origem, tipoVeneno;
	char sexo, tipoAnimal, cont = 's';
	unsigned int tamAntigo;

	while(cont == 's'){
		cout << "O animal a ser cadastrado será um reptil nativo ou exotico?"
		cout << "1 - NATIVO" << endl;
		cout << "2 - EXOTICO" << endl;
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
			cin>>veterinario;
			cout<<"Insira o nome do tratador:"<<endl;
			cin>>tratador;
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

				repNat.insert(pair<int, ReptilNativo>(id, ReptilNativo(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, autorizacaoIBAMA, venenoso, tipoVeneno, origem, autorizacao)));

			}
			//Repteis Exoticos
			else{
				tamAntigo = repExo.size();

				cout<<"Insira o País de origem:"<<endl;
				getline(cin,origem);
				cout<<"Insira a autorizacao do animal:"<<endl;
				getline(cin,autorizacao);

				repExo.insert(pair<int, ReptilExotico>(id, ReptilExotico(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, autorizacaoIBAMA, venenoso, tipoVeneno, origem, autorizacao)));

			}
		}
	}
	if(repNat.empty()){
		cout <<  "Erro, ao inserir animal em 'repteisNativos.txt'"<<endl;
	}else{
		repNativos.open("repteisNativos.txt");
		for(auto it = repNat.begin(); it != repNat.end(); it++){
			repNativos << (*it).second; //sobrecarregar operador de inserção para inserir o objeto no arquivo
		}	
		repNativos.close();
	}

	if(repExo.empty()){
		cout <<  "Erro, ao inserir animal em 'repteisExoticos.txt'"<<endl;
	}else{
		repExoticos.open("repteisExoticos.txt");
		for(auto it = repExo.begin(); it != repExo.end(); it++){ c++11
			repExoticos << (*it).second; //sobrecarregar operador de inserção para inserir o objeto no arquivo
		}
		repExoticos.close();
	}
}

//Cadastro de Funcionarios

//Função geral

//adaptar para map
void cadastrarFuncionario (map <int, Veterinario> &veterinarios, map <int, Tratador> &tratadores){
	int tipoFuncionario;
	char cont = 's';

	while(cont == 's'){
		cout << "O funcionario a ser cadastrado será um veterinario ou um tratador" << endl;
		cout << "1 - VETERINARIO" << endl;
		ciyt << "2 - TRATADOR" << endl;
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

void cadastrar(map <int, Veterinario> &veterinarios){
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
	veterinarios.insert(pair<int, Veterinario>(id, Veterinario(id, nome, cpf, idade, tipoSang, fatorRH, especialidade, crmv)));

	if(veterinarios.empty()){
		cout <<  "Erro, ao inserir animal em 'veterinarios.txt'"<<endl;
	}else{
		veterinarios.open("veterinarios.txt");
		for(auto it = veterinarios.begin(); it != veterinarios.end(); it++){
			veterinarios << (*it).second; //sobrecarregar operador de inserção para inserir o objeto no arquivo
		}	
		veterinarios.close();
	}
}

//Função especifica para cadastro de Tratadores

void cadastrar( map <int, Tratador> &tratadores){
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
	tratadores.insert(pair<int, Tratador>(id, Tratador(id, nome cpf, idade, tipoSang, fatorRH, especialidade, nivelSeg)));

	if(tratadores.empty()){
		cout <<  "Erro, ao inserir animal em 'tratadores.txt'"<<endl;
	}else{
		tratadores.open("tratadores.txt");
		for(auto it = tratadores.begin(); it != tratadores.end(); it++){
			tratadores << (*it).second; //sobrecarregar operador de inserção para inserir o objeto no arquivo
		}	
		tratadores.close();
	}

}
