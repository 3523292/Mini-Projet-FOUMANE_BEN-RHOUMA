/************************************************************************************************************************************
                                                    
											Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#pragma once

#include <gtkmm/main.h>
#include <gtkmm/window.h>
#include <gtkmm/image.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>
#include <gtkmm/buttonbox.h>
#include <string>
#include "Fenetre_mere.hh"
#include <glibmm/ustring.h>

using namespace std;

class Fenetre_info1: public Fenetre_mere{
	/*	Attributs	*/
private:		
	int largeur;
	int hauteur;
	Gtk::Label _text;
	Gtk::Button entrer;
	Gtk::HButtonBox boiteBoutonsH;
	Gtk::HButtonBox boiteBoutonsH1;
	
	Gtk::VBox boiteV;
	
	
	
	
public:
	Fenetre_info1(Glib::ustring text);
	~Fenetre_info1();
	virtual void bouton_menu();

};

