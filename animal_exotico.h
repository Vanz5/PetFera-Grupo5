#ifndef CLASS_ANIMAL_EXOTICO
#define CLASS_ANIMAL_EXOTICO

#include <string>

using std::string;

class AnimalExotico : public AnimalSilvestre {
	protected:
		string m_pais_origem;
	public:
		AnimalExotico ();
		~AnimalExotico ();
};

#endif