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
#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <string>
#include "Fenetre_mere.hh"

using namespace std;

class Fenetre_identification: public Fenetre_mere{
/*	Attributs	*/
private:		
	int largeur;
	int hauteur;
	string passwd;
	Gtk::HButtonBox boiteBoutonsH;
	Gtk::HButtonBox boiteBoutonsH1;
	Gtk::HButtonBox boiteBoutonsH2;
	Gtk::Label text;
	Gtk::Label id;
	Gtk::Entry text_id;
	Gtk::VBox boiteV;
	Gtk::Button retour;	
	Gtk::Button entrer;
	
	
	
public:
	Fenetre_identification();
	virtual ~Fenetre_identification();
	virtual void bouton_retour1();
	virtual void entrer_id();

};

