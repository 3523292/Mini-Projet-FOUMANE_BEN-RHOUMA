/************************************************************************************************************************************
                                                    
												Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#pragma once
#include "User.hh"


class Region: public User{
		protected:
			Reg _region;
			int nbre_electeur;
			
		public:
			Region();
			Region(Reg region);
			Region(Region const& regionCopie);
			~Region();
			Reg evaluate2()const;
			Region& operator=(const Region& region2);
			
			
};
