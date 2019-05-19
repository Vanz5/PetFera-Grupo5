#ifndef CLASS_ANFIBIO
#define CLASS_ANFIBIO

#include <string>
#include "veterinario.h"
#include "tratador.h"

using std::string;

class Anfibio : public Animal {
	protected:
		int m_total_de_mudas;
		date m_ultima_muda;
	public:
		Anfibio ();
		~Anfibio ();
};

#endif