/************************************************************************************************************************************
                                                    
												Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#include "Parti_politique.hh"

/*	Constructeurs	*/
Parti_politique::Parti_politique():nbre_electeur(0)
{
	
}

Parti_politique::Parti_politique(Parti part):nbre_electeur(0), _part(part)
{
	
}



/*	 Destructeur	*/
Parti_politique::~Parti_politique(){}

/*	Méthodes	*/
Parti Parti_politique::evaluate()const
{
	return _part;
}

Parti_politique& Parti_politique::operator=(const Parti_politique& parti_politique2)
{
	_part = parti_politique2._part;
	return *this;
}

