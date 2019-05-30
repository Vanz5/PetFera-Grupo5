#include "classes.h"


//Cadastro geral de animais - Todos os tipos precisam passar por aqui

void editarAnimal(map <int, AnfibioNativo> &anfNat, map <int, AnfibioExotico> &anfExo, map <int, AveNativo> &aveNat, map <int, AveExotico> &aveExo, map<int, MamiferoNativo> &mamNat, map <int, MamiferoExotico> &mamExo, map<int, ReptilNativo> &repNat, map<int, ReptilExotico> &repExo){
	int tipoAnimal;
	char cont = 's', resposta;

	while(cont=='s'){
		cout << "Digite o tipo do animal que vai ser alterado?" << endl;
		cout << "1 - anfíbio" << endl;
		cout << "2 - ave" << endl;
		cout << "3 - mamífero" << endl;
		cout << "4 - reptil" <<endl;
		cin >> tipoAnimal;

		if(tipoAnimal == 1 || tipoAnimal == 2 || tipoAnimal == 3 || tipoAnimal == 4){
			switch(tipoAnimal){
				case 1:
					editar(anfNat,anfExo);
				case 2:
					editar(aveNat,aveExo);
				case 3;
					editar(mamNat,mamExo);
				case 4:
					editar(repNat,repExo);
			}
		}
		else{
			cout<<"Erro, tipo de animal incorreto! \n"<<endl;
			cout<<"\n s - Para sair da edição \n Aperte qualquer outra tecla para recomeçar "<<endl;
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

//Alterar anfibio
void editar(map <int, AnfibioNativo> &anfNat, map <int, AnfibioExotico> &anfExo){

	int id, totalMudas, tipoAnimal, veterinario, tratador;
	string classe, nomeAnimal,nomeCientifico, dieta, nomeBatismo, autorizacao, autorizacaoIBAMA, origem, ultimaMuda;
	char sexo, cont = 's';
	double tamanho;

	while(cont == 's'){
		cout << "O animal a ser alterado será um anfíbio nativo ou exotico?" << endl;
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
			if(tipoAnimal == 1){
				cout<<"Insira o ID do animal cadastrado:"<<endl;
				cin>>id;
				auto teste = AnfibioNativo.find(id);

				//Anfibios Nativos
				if (teste != AnfibioNativo.end()){
					cout<<"Animal encontrado com sucesso"<<endl;
					
					classe = "Amphibia";
					//Recadastramento do animal
					cout<<"Insira o nome do animal:"<<endl;
					cin.ignore();
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

	
					cout<<"Insira a UF de origem:"<<endl;
					getline(cin,origem);
					cout<<"Insira a autorizacao do animal:"<<endl;
					getline(cin,autorizacao);

					(*teste.second) = anfNat(pair<int, AnfibioNativo>(id, AnfibioNativo(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, totalMudas, ultimaMuda[], autorizacaoIBAMA, origem, autorizacao)));
						
				}
				else{
						cout<<"Animal não cadastrado"<<endl;
						cont = 'n';
				}
					//Anfibios Exoticos
				if (teste != AnfibioNativo.end()){
					cout<<"Animal encontrado com sucesso"<<endl;
					
					classe = "Amphibia";
					//Recadastramento do animal
					cout<<"Insira o nome do animal:"<<endl;
					cin.ignore();
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

	
					cout<<"Insira o País de origem:"<<endl;
					getline(cin,origem);
					cout<<"Insira a autorizacao do animal:"<<endl;
					getline(cin,autorizacao);


					(*teste.second) = anfExo(pair<int, AnfibioNativo>(id, AnfibioNativo(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, totalMudas, ultimaMuda[], autorizacaoIBAMA, origem, autorizacao)));
						
				}
				else{
						cout<<"Animal não cadastrado"<<endl;
						cont = 'n';
				}
			}

		}
	}
}
