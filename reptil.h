#ifndef CLASS_REPTIL
#define CLASS_REPTIL

#include <string>
#include "veterinario.h"
#include "tratador.h"

using std::string;

class Reptil : public Animal {
	protected:
		bool m_venenoso;
		string m_tipo_veneno;
	public:
		Reptil ();
		~Reptil ();
};

#endif