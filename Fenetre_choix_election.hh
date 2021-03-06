/************************************************************************************************************************************
                                                    
											Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#pragma once

#include <gtkmm/main.h>
#include <gtkmm/window.h>
#include <gtkmm/image.h>
#include <gtkmm/box.h>
#include <gtkmm/buttonbox.h>
#include <gtkmm/label.h>
#include <string>
#include "Fenetre_mere.hh"


using namespace std;

class Fenetre_choix_election: public Fenetre_mere{
	/*	Attributs	*/
private:		
	int largeur;
	int hauteur;
	Gtk::Label text;
	Gtk::Button retour;
	Gtk::Button entrer;
	Gtk::Button bouton_im1;
	Gtk::Button bouton_im2;
	Gtk::Image imag1;
	Gtk::Image imag2;
	Gtk::VBox v1;
	Gtk::VBox v2;
	Gtk::VBox boiteV;
	Gtk::HBox h1;
	Gtk::HButtonBox boiteBoutonsH;
	Gtk::HButtonBox boiteBoutonsH2;
	
	
	
	
public:
	Fenetre_choix_election();
	~Fenetre_choix_election();
	virtual void bouton_menu();
	virtual void bouton_retour2();
	virtual void entrer_choix1();
	virtual void entrer_choix2();

};



