

using namespace std;

class Persona {

	friend ostream & operator<<(ostream &, Persona &);

	template <class T>
	friend class Nodo;

private:

	int ID;
	int edad;
	string nombre;

public:

	Persona();
	Persona(int, string,int);
	virtual ~Persona();
	
};

ostream & operator<<(ostream &, Persona &);
