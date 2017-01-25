/************************************************************************************************************************************
                                                    
											Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#pragma once

#include <gtkmm/main.h>
#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/box.h>
#include <gtkmm/buttonbox.h>
#include <gtkmm/messagedialog.h>
#include <gtkmm/image.h>
#include <string>
#include "Fenetre_mere.hh"

using namespace std;


class Fenetre: public Fenetre_mere{
	/*	Attributs	*/
private:		
	int largeur;
	int hauteur;
	Gtk::HButtonBox boiteBoutonsH;
	Gtk::HButtonBox boiteBoutonsH1;
	Gtk::HButtonBox boiteBoutonsH2;
	Gtk::VBox boiteV;
	Gtk::Button admin;	
	Gtk::Button user;
	Gtk::Button voter;
	Gtk::Button fermer;
	Gtk::Image polytech;
	Gtk::Image flag;
	
public:
	Fenetre();
	virtual ~Fenetre();
	virtual void bouton_quitter();
	virtual void bouton_admin();
	virtual void bouton_user();
	virtual void bouton_voter();
		

};


