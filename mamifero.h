#ifndef CLASS_MAMIFERO
#define CLASS_MAMIFERO

#include <string>
#include "veterinario.h"
#include "tratador.h"

using std::string;

class Mamifero : public Animal {
	protected:
		string m_cor_pelo;
	public:
		Mamifero ();
		~Mamifero ();
};

#endif