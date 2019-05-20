#include <iostream>
#include <string>
using namespace std;

int menu(){
	int opt;
	cout << "\n************************** MENU ****************************" << endl;
	cout << "1: Cadastrar novo animal" << endl;
	cout << "2: Remover animal" << endl;
	cout << "3: Alterar dados de um animal" << endl;
	cout << "4: Consultar dados de um animal ou por uma classe de animais" << endl;
	cout << "5: Cadastrar novo funcionário" << endl;
	cout << "6: Remover funcionário" << endl;
	cout << "7: Consultar animais sob responasibilidade de um tratador ou veterinário" << endl;
	cout << "8: Encerrar o programa" << endl;

	cout<< "\nDigite a opção: ";
	cin >> opt;
	switch(opt){
		case 1:
			cout << "Erro, Cadastrar animal ainda não foi definido" << endl;
			return 1;
		case 2:
			cout << "Erro, Remover animal ainda não foi definido" << endl;
			return 2;
		case 3:
			cout << "Erro, Alterar dados de um animal ainda não foi definido" << endl;
			return 3;
		case 4:
			cout << "Erro, Consultar dados de um animal ainda não foi definido" << endl;
			return 4;
		case 5:
			cout << "Erro, Cadastrar funcionario ainda não foi definido" << endl;	
			return 5;
		case 6:
			cout << "Erro, remover funcionário ainda não foi definido" << endl;
			return 6;
		case 7:
			cout << "Erro, consultar animais ainda não foi definido" << endl;
			return 7;
		case 8:
			cout << "Encerrando o programa." << endl;
			return 8;
	}
	return -1;
}

int main(){
	int i;
	do{
		i = menu();
	}while(i != 8);

	return 0;
}
