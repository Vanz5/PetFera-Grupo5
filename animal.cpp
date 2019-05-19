#include "animal.h"

Animal::Animal () {}

Animal::Animal (int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo) :
	m_id (id), m_classe (classe), m_nome_cientifico (nome_cientifico), m_sexo (sexo), m_tamanho (tamanho), m_dieta (dieta), m_veterinario (veterinario), m_tratador (tratador), m_nome_batismo (nome_batismo) {}

Animal::~Animal () {}