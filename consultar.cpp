//Adicionar includes necessarios
#include "classes.h"

// Implementação com a consulta por classe

void consultarClasse(map <int,AnfibioNativo> &anfNat, map <int, AnfibioExotico> &anfExo, map <int, AveNativo> &aveNat, map <int, AveExotico> &aveExo, map <int, MamiferoNativo> &mamNat, map <int,MamiferoExotico> &mamExo, map <int, ReptilNativo> &repNat, map <int, ReptilExotico> &repExo){
	int tipoClasse;
	char cont = 's',resposta;

	while(cont=='s'){
		cout<< "Qual será o tipo de animal consultado? \n 1 - anfíbio \n 2 - ave \n 3 - mamífero \n 4 - reptil" <<endl;
		cin>>tipoAnimal;

		if(tipoClasse !=1 && tipoClasse !=2 && tipoClasse !=3 && tipoClasse !=4){
			cout<<"Classe de animal incorreta! \n"<<endl;
			cout<<"\n s - Para sair da consulta \n Aperte qualquer outra tecla para recomeçar"<<endl;
			cin>>resposta;
			if(resp == 's'){
				cont = 'n';
				break;
			}
			cont = 's';
			continue;
		}
		else{
			if(tipoAnimal == 1){
				consultar(anfNat,anfExo);
			}
			else if(tipoAnimal == 2){
				consultar(aveNat,aveExo);
			}
			else if(tipoAnimal == 3){
				consultar(mamNat,mamExo);
			}
			else if(tipoAnimal == 4){
				consultar(repNat,repExo);
			}
		}

	}
}

//Função especifica para consulta de anfibios
void consultar(map <int, AnfibioNativo> &anfNat, map <int, AnfibioExotico> &anfExo){
	cout<<"\n \n Anfibios Nativos:"<<endl;
	for(auto it=anfNat.begin(); it != anfNat.end(); it++){
		cout<<it->second;
	}
		cout<<"\n \n Anfibios Exoticos:"<<endl;
	for(auto it=anfExo.begin(); it != anfExo.end(); it++){
		cout<<it->second;
	}
}

//Função especifica para consulta de aves
void consultar(map <int, AveNativo> &aveNat, map <int, AveExotico> &aveExo){
	cout<<"\n \n Aves Nativas:"<<endl;
	for(auto it=aveNat.begin(); it != aveNat.end(); it++){
		cout<<it->second;
	}
		cout<<"\n \n Aves Exoticas:"<<endl;
	for(auto it=aveExo.begin(); it != aveExo.end(); it++){
		cout<<it->second;
	}
}

//Função especifica para consulta de mamiferos
void consultar(map <int, MamiferoNativo> &mamNat, map <int, MamiferoExotico> &mamExo){
	cout<<"\n \n Mamiferos Nativos:"<<endl;
	for(auto it=mamNat.begin(); it != mamNat.end(); it++){
		cout<<it->second;
	}
		cout<<"\n \n Mamiferos Exoticos:"<<endl;
	for(auto it=mamExo.begin(); it != mamExo.end(); it++){
		cout<<it->second;
	}
}


//Função especifica para consulta de Repteis
void consultar(map <int, ReptilNativo> &repNat, map <int, ReptilExotico> &repExo){
	cout<<"\n \n Mamiferos Nativos:"<<endl;
	for(auto it=repNat.begin(); it != repNat.end(); it++){
		cout<<it->second;
	}
		cout<<"\n \n Mamiferos Exoticos:"<<endl;
	for(auto it=repExo.begin(); it != repExo.end(); it++){
		cout<<it->second;
	}
}
