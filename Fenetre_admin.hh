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


class Fenetre_admin: public Fenetre_mere{
	/*	Attributs	*/
private:		
	int largeur;
	int hauteur;
	string passwd;
	string login1;
	Gtk::HButtonBox boiteBoutonsH;
	Gtk::HButtonBox boiteBoutonsH1;
	Gtk::HButtonBox boiteBoutonsH2;
	Gtk::Label login;
	Gtk::Label pwd;
	Gtk::Entry text_login;
	Gtk::Entry text_pwd;
	Gtk::VBox boiteV;
	Gtk::Button retour1;	
	Gtk::Button suivant;
	//Admin administrateur;
	
	
	
public:
	Fenetre_admin();
	virtual ~Fenetre_admin();
	virtual void bouton_retour();
	virtual void entrer_login();

};

