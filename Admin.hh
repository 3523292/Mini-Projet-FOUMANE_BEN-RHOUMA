/************************************************************************************************************************************

												Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#include "Personne.hh"

class Admin: public Personne
{

		/*		Attributs	*/
		public:
			//const Personne& _pers;
			std::string login;
			std::string password;


		/*		Methodes	*/
		public:
			Admin();
			~Admin();
			void identification();
			//void enregistrement();
			void choisirElection();

};
