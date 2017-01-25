/***********************************************************************************************************************************
                                                    
										FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#include "User.hh"


/*		Affichage des valeurs ternaires		*/
std::ostream& operator<<(std::ostream & out, Parti val)
{
	switch(val)
	{
		case D: out << "Droite"; 
			break;
		case G: out << "G"; 
			break;
		case C: out << "C"; 
			break;
		default : out << "P";
			break;
	}
	return out;
}


/*		Affichage des valeurs Reg		*/
std::ostream& operator<<(std::ostream & out, Reg val)
{
	switch(val)
	{
		case I: out << "Ile-de-France"; 
			break;
		case H: out << "H"; 
			break;
		case Gr: out << "G"; 
			break;
		case Pa: out << "P"; 
			break;
		case O: out << "O"; 
			break;
		default : out << "A";
			break;
	}
	return out;
}

/*	Constructeur	*/
User::User()//:_nom(""), _prenom(""), _part(P), _region(A)
{
	
}


/*	Destructeur	*/
User::~User(){}

/*	Méthodes	*/
void User::identification()
{
	
}


void User::enregistrement(string nom, string prenom, Parti part, Reg region)
{
	//_nom  = nom;
	//_prenom = prenom;
	//_part = part;
	//_region = region;
	
	
}

void User::voter(bool& choix)
{
}
