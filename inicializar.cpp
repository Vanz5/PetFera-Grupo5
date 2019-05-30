//Adicionar includes necessarios
#include "classes.h"
#include "funcoes.h"

//Passa os dados dos arquivos.txt para seus respectivos maps

void inicializar(map<int,AnfibioNativo> &anfNat, map<int, AnfibioExotico> &anfExo, map<int, AveNativo> &aveNat, map<int, AveExotico> &aveExo, map<int, MamiferoNativo> &mamNat, map<int, MamiferoExotico> &mamExo, map<int, ReptilNativo> &repNat, map<int, ReptilExotico> &repExo,map <int, Veterinario> &veterinarios,map <int, Tratador> &tratadores){
	int id, totalMudas, idade, veterinario, tratador; 
	string ultimaMuda, classe, nomeAnimal, nomeCientifico, dieta, nomeBatismo, autorizacao, autorizacaoIBAMA, origem, cor, tipoVeneno, especialidade, crmv, tipoSang, nome, nivelSeg;
	char sexo, fatorRH;
	double tamanho, tamBico, envergadura
	bool venenoso;
	long int cpf;
	string anfibio[15], ave[15], mamifero [14], reptil[15], veterinario[8], tratador [8], line, tmp;
	int pos;

	//Passando dados de "anfNat.txt" para seu respectivo map

	ifstream appFile("anfNat.txt");
	if(appFile.is_open()){
		while(getline(appFile,line)){
			pos = 0;
			for(int i = 0; (int)line.length();i++){
				if(line[i] == ';'){
					anfibio[pos] = tmp;
					tmp.erase();
					pos++;
				}
				else{
					tmp.push_back(line[i]);
				}
			}

			id = stoi (anfibio[0]);
			classe = anfibio[1];
			nomeAnimal = anfibio[2];
			nomeCientifico = anfibio[3];
			sexo = (char)anfibio[4];
			tamanho = stod(anfibio[5]);
			dieta = anfibio[6];
			veterinario = stoi(anfibio[7]);
			tratador = stoi(anfibio[8]);
			totalMudas = stoi(anfibio[9]);
			ultimaMuda = anfibio[10]
			nomeBatismo = anfibio[11];
			autorizacaoIBAMA = anfibio[12];
			origem = anfibio[13];
			autorizacao = anfibio[14]

			anfNat.insert(pair<int, AnfibioNativo>(id, AnfibioNativo(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, totalMudas, ultimaMuda[], autorizacaoIBAMA, origem, autorizacao)));
		}
		appFile.close();
			
	}



	//Passando dados de "anfExo.txt" para seu respectivo map

	ifstream appFile("anfExo.txt");
	if(appFile.is_open()){
		while(getline(appFile,line)){
			pos = 0;
			for(int i = 0; (int)line.length();i++){
				if(line[i] == ';'){
					anfibio[pos] = tmp;
					tmp.erase();
					pos++;
				}
				else{
					tmp.push_back(line[i]);
				}
			}

			id = stoi (anfibio[0]);
			classe = anfibio[1];
			nomeAnimal = anfibio[2];
			nomeCientifico = anfibio[3];
			sexo = (char)anfibio[4];
			tamanho = stod(anfibio[5]);
			dieta = anfibio[6];
			veterinario = stoi(anfibio[7]);
			tratador = stoi(anfibio[8]);
			totalMudas = stoi(anfibio[9]);
			ultimaMuda = anfibio[10]
			nomeBatismo = anfibio[11];
			autorizacaoIBAMA = anfibio[12];
			origem = anfibio[13];
			autorizacao = anfibio[14]

			anfExo.insert(pair<int, AnfibioExotico>(id, AnfibioExotico(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, totalMudas, ultimaMuda[], autorizacaoIBAMA, origem, autorizacao)));
		}
		appFile.close();
			
	}


	//Passando dados de "aveNat.txt" para seu respectivo map

	ifstream appFile("aveNat.txt");
	if(appFile.is_open()){
		while(getline(appFile,line)){
			pos = 0;
			for(int i = 0; (int)line.length();i++){
				if(line[i] == ';'){
					ave[pos] = tmp;
					tmp.erase();
					pos++;
				}
				else{
					tmp.push_back(line[i]);
				}
			}

			id = stoi (ave[0]);
			classe = ave[1];
			nomeAnimal = ave[2];
			nomeCientifico = ave[3];
			sexo = (char)ave[4];
			tamanho = stod(ave[5]);
			dieta = ave[6];
			veterinario = stoi(ave[7]);
			tratador = stoi(ave[8]);
			nomeBatismo = ave[9];
			tamBico = stoi(ave[10]);
			envergadura = stoi(ave[11]);
			autorizacaoIBAMA = ave[12];
			origem = ave[13];
			autorizacao = ave[14]

			aveNat.insert(pair<int, AveNativo> (id, AveNativo(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, tamBico, envergadura, autorizacaoIBAMA, origem, autorizacao)));
		}
		appFile.close();
			
	}



	//Passando dados de "aveExo.txt" para seu respectivo map

	ifstream appFile("aveExo.txt");
	if(appFile.is_open()){
		while(getline(appFile,line)){
			pos = 0;
			for(int i = 0; (int)line.length();i++){
				if(line[i] == ';'){
					ave[pos] = tmp;
					tmp.erase();
					pos++;
				}
				else{
					tmp.push_back(line[i]);
				}
			}

			id = stoi (ave[0]);
			classe = ave[1];
			nomeAnimal = ave[2];
			nomeCientifico = ave[3];
			sexo = (char)ave[4];
			tamanho = stod(ave[5]);
			dieta = ave[6];
			veterinario = stoi(ave[7]);
			tratador = stoi(ave[8]);
			nomeBatismo = ave[9];
			tamBico = stoi(ave[10]);
			envergadura = stoi(ave[11]);
			autorizacaoIBAMA = ave[12];
			origem = ave[13];
			autorizacao = ave[14]

			aveExo.insert(pair<int, AveExotico>(id, AveExotico(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, tamBico, envergadura, autorizacaoIBAMA, origem)));
		}
		appFile.close();
			
	}

	//Passando dados de "mamNat.txt" para seu respectivo map

	ifstream appFile("mamNat.txt");
	if(appFile.is_open()){
		while(getline(appFile,line)){
			pos = 0;
			for(int i = 0; (int)line.length();i++){
				if(line[i] == ';'){
					mamifero[pos] = tmp;
					tmp.erase();
					pos++;
				}
				else{
					tmp.push_back(line[i]);
				}
			}

			id = stoi (mamifero[0]);
			classe = mamifero[1];
			nomeAnimal = mamifero[2];
			nomeCientifico = mamifero[3];
			sexo = (char)mamifero[4];
			tamanho = stod(mamifero[5]);
			dieta = mamifero[6];
			veterinario = stoi(mamifero[7]);
			tratador = stoi(mamifero[8]);
			nomeBatismo = mamifero[9];
			cor = mamifero[10];
			autorizacaoIBAMA = mamifero[11];
			origem = mamifero[12];
			autorizacao = mamifero[13];

			mamNat.insert(pair<int, MamiferoNativo>(id, MamiferoNativo(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, cor, autorizacaoIBAMA, origem, autorizacao)));
		}
		appFile.close();
			
	}



	//Passando dados de "mamExo.txt" para seu respectivo map

	ifstream appFile("mamExo.txt");
	if(appFile.is_open()){
		while(getline(appFile,line)){
			pos = 0;
			for(int i = 0; (int)line.length();i++){
				if(line[i] == ';'){
					mamifero[pos] = tmp;
					tmp.erase();
					pos++;
				}
				else{
					tmp.push_back(line[i]);
				}
			}

			id = stoi (mamifero[0]);
			classe = mamifero[1];
			nomeAnimal = mamifero[2];
			nomeCientifico = mamifero[3];
			sexo = (char)mamifero[4];
			tamanho = stod(mamifero[5]);
			dieta = mamifero[6];
			veterinario = stoi(mamifero[7]);
			tratador = stoi(mamifero[8]);
			nomeBatismo = mamifero[9];
			cor = mamifero[10];
			autorizacaoIBAMA = mamifero[11];
			origem = mamifero[12];
			autorizacao = mamifero[13];

			mamExo.insert(pair<int, MamiferoExotico>(id, MamiferoExotico(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, cor, autorizacaoIBAMA, origem)));
			}
		appFile.close();
			
	}

	//Passando dados de "repNat.txt" para seu respectivo map

	ifstream appFile("repNat.txt");
	if(appFile.is_open()){
		while(getline(appFile,line)){
			pos = 0;
			for(int i = 0; (int)line.length();i++){
				if(line[i] == ';'){
					reptil[pos] = tmp;
					tmp.erase();
					pos++;
				}
				else{
					tmp.push_back(line[i]);
				}
			}

			id = stoi (reptil[0]);
			classe = reptil[1];
			nomeAnimal = reptil[2];
			nomeCientifico = reptil[3];
			sexo = (char)reptil[4];
			tamanho = stod(reptil[5]);
			dieta = reptil[6];
			veterinario = stoi(reptil[7]);
			tratador = stoi(reptil[8]);
			nomeBatismo = reptil[9];
			autorizacaoIBAMA = reptil[10];
			venenoso = stoi(reptil[11]);
			tipoVeneno = reptil[12];
			origem = reptil[13];
			autorizacao = reptil[14]

			repNat.insert(pair<int, ReptilNativo>(id, ReptilNativo(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, autorizacaoIBAMA, venenoso, tipoVeneno, origem, autorizacao)));
		}
		appFile.close();
			
	}


	//Passando dados de "repExo.txt" para seu respectivo map

	ifstream appFile("repExo.txt");
	if(appFile.is_open()){
		while(getline(appFile,line)){
			pos = 0;
			for(int i = 0; (int)line.length();i++){
				if(line[i] == ';'){
					anfibio[pos] = tmp;
					tmp.erase();
					pos++;
				}
				else{
					tmp.push_back(line[i]);
				}
			}

			id = stoi (reptil[0]);
			classe = reptil[1];
			nomeAnimal = reptil[2];
			nomeCientifico = reptil[3];
			sexo = (char)reptil[4];
			tamanho = stod(reptil[5]);
			dieta = reptil[6];
			veterinario = stoi(reptil[7]);
			tratador = stoi(reptil[8]);
			nomeBatismo = reptil[9];
			autorizacaoIBAMA = reptil[10];
			venenoso = stoi(reptil[11]);
			tipoVeneno = reptil[12];
			origem = reptil[13];
			autorizacao = reptil[14]

			repExo.insert(pair<int, ReptilExotico>(id, ReptilExotico(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, autorizacaoIBAMA, venenoso, tipoVeneno, origem)));
		}
		appFile.close();
			
	}

//Passando dados de "veterinarios.txt" para seu respectivo map

	ifstream appFile("veterinarios.txt");
	if(appFile.is_open()){
		while(getline(appFile,line)){
			pos = 0;
			for(int i = 0; (int)line.length();i++){
				if(line[i] == ';'){
					veterinario[pos] = tmp;
					tmp.erase();
					pos++;
				}
				else{
					tmp.push_back(line[i]);
				}
			}

			id = stoi (veterinario[0]);
			nome = veterinario[1];
			cpf = stoi(veterinario[2]);
			idade = stoi(veterinario[3]);
			tipoSang = veterinario[4];
			fatorRH = (char) veterinario[5];
			especialidade = veterinario[6];
			crmv = veterinario[7];

			veterinarios.insert(pair<int, Veterinario>(id, Veterinario(id, nome, cpf, idade, tipoSang, fatorRH, especialidade, crmv)));
			}
		appFile.close();
			
	}

//Passando dados de "tratadores.txt" para seu respectivo map

	ifstream appFile("tratadores.txt");
	if(appFile.is_open()){
		while(getline(appFile,line)){
			pos = 0;
			for(int i = 0; (int)line.length();i++){
				if(line[i] == ';'){
					tratador[pos] = tmp;
					tmp.erase();
					pos++;
				}
				else{
					tmp.push_back(line[i]);
				}
			}

			id = stoi (tratador[0]);
			nome = tratador[1];
			cpf = stoi(tratador[2]);
			idade = stoi(tratador[3]);
			tipoSang = tratador[4];
			fatorRH = (char) tratador[5];
			especialidade = tratador[6];
			nivelSeg = tratador[7];

			tratadores.insert(pair<int, Tratador>(id, Tratador(id, nome cpf, idade, tipoSang, fatorRH, especialidade, nivelSeg)));
			}
		appFile.close();
			
	}	

}
