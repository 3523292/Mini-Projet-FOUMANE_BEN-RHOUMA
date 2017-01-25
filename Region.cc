/************************************************************************************************************************************
                                                    
												Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#include "Region.hh"


/*	Constructeurs	*/
Region::Region():nbre_electeur(0)
{
		
}

Region::Region(Reg region):nbre_electeur(0), _region(region)
{
		
}

/*	 Destructeur	*/
Region::~Region(){}


/*	Méthodes	*/
Reg Region::evaluate2()const
{
	return _region;
}

Region& Region::operator=(const Region& region2)
{
	_region = region2._region;
	return *this;
}
	
