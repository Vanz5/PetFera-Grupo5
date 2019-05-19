#ifndef CLASS_AVE
#define CLASS_AVE

#include <string>
#include "veterinario.h"
#include "tratador.h"

using std::string;

class Ave : public Animal {
	protected:
		double m_tamanho_do_bico_cm;
		double m_envergadura_das_asas;
	public:
		Ave ();
		~Ave ();
};

#endif