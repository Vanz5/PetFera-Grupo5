#ifndef CLASS_TRATADOR
#define CLASS_TRATADOR

#include <string>

class Tratador : public Funcionario {
	private:
		int m_nivel_de_seguranca;
	public:
		Tratador ();
		~Tratador ();
};

#endif