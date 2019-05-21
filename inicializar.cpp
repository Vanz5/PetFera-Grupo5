//Adicionar includes necessarios

//Passa os dados dos arquivos.txt para seus respectivos maps

void inicializar(map<int,anfibio_nativo> &anfNat, map<int, anfibio_exotico> &anfExo, map<int, ave_nativo> &aveNat, map<int, ave_exotico> &aveExo, map<int,mamifero_nativo> &mamNat, map<int,mamifero_exotico> &mamExo, map<int,reptil_nativo> &repNat, map<int,reptil_exotico> &repExo,map <int, Veterinarios> &veterinarios,map <int, Tratadores> &tratadores){
	int id, totalMudas, idade, veterinario, tratador; 
	string ultimaMuda, classe, nomeAnimal, nomeCientifico, dieta, nomeBatismo, autorizacao, autorizacaoIBAMA, origem, cor, tipoVeneno, especialidade, crmv, tipoSang;
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
			totalMudas = anfibio[9];
			ultimaMuda = anfibio[10]
			nomeBatismo = anfibio[11];
			autorizacaoIBAMA = anfibio[12];
			origem = anfibio[13];
			autorizacao = anfibio[14]

			anfNat.insert(pair<int, anfibio_nativo>(id, anfibio_nativo(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, totalMudas, ultimaMuda[], autorizacaoIBAMA, origem, autorizacao)));
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
			totalMudas = anfibio[9];
			ultimaMuda = anfibio[10]
			nomeBatismo = anfibio[11];
			autorizacaoIBAMA = anfibio[12];
			origem = anfibio[13];
			autorizacao = anfibio[14]

			anfExo.insert(pair<int, anfibio_exotico>(id, anfibio_exotico(id, classe, nomeAnimal, nomeCientifico, sexo, tamanho, dieta, veterinario, tratador, nomeBatismo, totalMudas, ultimaMuda[], autorizacaoIBAMA, origem, autorizacao)));
		}
		appFile.close();
			
	}


}
