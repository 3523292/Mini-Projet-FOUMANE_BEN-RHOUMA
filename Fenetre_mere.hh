/************************************************************************************************************************************
                                                    
											Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

//#ifndef DEF_FENETRE_MERE
//#define DEF_FENETRE_MERE


#pragma once

#include <gtkmm/window.h>
#include <gtkmm/image.h>
#include <gtkmm/main.h>
#include <gtkmm/messagedialog.h>
#include "Election.hh"
#include <glibmm/ustring.h>


class Fenetre_mere : public Gtk::Window
{	
	public:
		int largeur;
		int hauteur;
		static int pourcentage_vote1;
		static int pourcentage_vote2;
		Election election;
		
	public:
		Fenetre_mere();
		virtual ~Fenetre_mere();
		
};

//#endif
