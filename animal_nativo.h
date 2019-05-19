#ifndef CLASS_ANIMAL_NATIVO
#define CLASS_ANIMAL_NATIVO

#include <string>

using std::string;

class AnimalNativo : public AnimalSilvestre {
	protected:
		string m_uf_origem;
		string m_autorizacao;
	public:
		AnimalNativo ();
		~AnimalNativo ();
};

#endif