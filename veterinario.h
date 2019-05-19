#ifndef CLASS_VETERINARIO
#define CLASS_VETERINARIO

#include <string>

class Veterinario : public Funcionario {
	protected:
		string m_crmv;
	public:
		Veterinario ();
		~Veterinario ();
};

#endif