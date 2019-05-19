#ifndef CLASS_ANIMAL_SILVESTRE
#define CLASS_ANIMAL_SILVESTRE

#include <string>

using std::string;

class AnimalSilvestre {
	protected:
		string m_autorizacao_ibama;
	public:
		AnimalSilvestre ();
		~AnimalSilvestre ();
};

#endif