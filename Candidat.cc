/************************************************************************************************************************************
                                                    TP3 SAKHI Faiçal et FOUMANE Paul



*************************************************************************************************************************************/

#include "Candidat.hh"


int Candidat::i=0;
int Candidat::pt_vote=1;

/*	Constructeur	*/
Candidat::Candidat(): _nom(""), _prenom(""), _part(P), _region(A), id ("")
{
	id = "cand_";
	id += (i+48);	
	i++;
}

/*
Candidat::Candidat(User& user): _user(user), _nom(""), _prenom(""), _part(P), _region(A), id ("")
{
	id += i;	
	i++;
}

Candidat::Candidat(Candidat& user2): _user(user2), _nom(""), _prenom(""), _part(P), _region(A), id ("")
{
	id += i;	
	i++;
}
*/


/*	 Destructeur	*/
Candidat::~Candidat(){}


/*	Méthodes	*/

void Candidat::identification()
{
	
}
	

void Candidat::enregistrement(string nom, string prenom, Parti part, Reg region)
{
	_nom  = nom;
	_prenom = prenom;
	_part = part;
	_region = region;
}

Parti Candidat::evaluate() const
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
}

Reg Candidat::evaluate2() const
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
}


void Candidat::voter(bool& choix)
{
	
}

