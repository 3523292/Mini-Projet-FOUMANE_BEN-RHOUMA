/************************************************************************************************************************************
                                                    
												Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/
#include "Electeur.hh"

int Electeur::i=0;
int Electeur::pt_vote=2;

/*	Constructeur	*/

Electeur::Electeur(): _nom(""), _prenom(""), _part(P), _region(A)
{
	id = "elect_";
	id += (i+48);	
	i++;

}
/*
Electeur::Electeur(User& user): _user(user), _nom(""), _prenom(""), _part(P), _region(A), id ("")
{
	id += i;	
	i++;
}

Electeur::Electeur(Electeur& user2): _user(user2), _nom(""), _prenom(""), _part(P), _region(A), id ("")
{
	id += i;	
	i++;
}

*/

/*	 Destructeur	*/
Electeur::~Electeur(){}


/*	Méthodes	*/

void Electeur::identification()
{
		
}
	

void Electeur::enregistrement(string nom, string prenom, Parti part, Reg region)
{
	_nom  = nom;
	_prenom = prenom;
	_part = part;
	_region = region;
	
}

Parti Electeur::evaluate() const
{
	/*switch(_user.evaluate())
	{
		case D: return D; 
			break;
		case G: return G; 
			break;
		case C: return C; 
			break;
		default : return P;
			break;
	}*/
	return _part;
}

Reg Electeur::evaluate2() const
{
	/*switch(_user.evaluate2())
	{
		case I: return I;
			break;
		case H: return H; 
			break;
		case Gr: return Gr; 
			break;
		case Pa: return Pa; 
			break;
		case O: return O; 
			break;
		default : return A;
			break;
	}*/
	return _region;
}


void Electeur::voter(bool& choix)
{
	
}
