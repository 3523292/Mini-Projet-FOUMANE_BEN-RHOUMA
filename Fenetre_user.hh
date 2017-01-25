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
#include <gtkmm/comboboxtext.h>
#include <string>
#include "Fenetre_mere.hh"
#include "Candidat.hh"
#include <glibmm/ustring.h>

using namespace std;

class Fenetre_user: public Fenetre_mere{
	/*	Attributs	*/
private:		
	int largeur;
	int hauteur;
	Glib::ustring nom;
	Glib::ustring prenom;
	Glib::ustring region;
	Glib::ustring parti;
	Gtk::ComboBoxText liste_parti;
	Gtk::ComboBoxText liste_region;
	Gtk::HButtonBox boiteBoutonsH;
	Gtk::HButtonBox boiteBoutonsH1;
	Gtk::HButtonBox boiteBoutonsH2;
	Gtk::HButtonBox boiteBoutonsH3;
	Gtk::HBox b1; 
	Gtk::VBox h1; 
	Gtk::VBox h2; 
	Gtk::Label text;
	Gtk::Label login;
	Gtk::Label pwd;
	Gtk::Entry text_login;
	Gtk::Entry text_pwd;
	Gtk::VBox boiteV;
	Gtk::Button retour;	
	Gtk::Button entrer;
	
	
	
public:
	Fenetre_user();
	~Fenetre_user();
	virtual void bouton_retour1();
	virtual void entrer_login1();

};


