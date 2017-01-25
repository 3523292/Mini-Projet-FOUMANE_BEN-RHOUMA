/************************************************************************************************************************************
                                                    
											Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#pragma once

#include <gtkmm/main.h>
#include <gtkmm/window.h>
#include <gtkmm/image.h>
#include <gtkmm/button.h>
#include <gtkmm/box.h>
#include <gtkmm/buttonbox.h>
#include <string>
#include "Fenetre_mere.hh"

using namespace std;

class Fenetre_choix_image: public Fenetre_mere{
	/*	Attributs	*/
private:		
	int largeur;
	int hauteur;
	Gtk::Button retour;
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
	Fenetre_choix_image();
	virtual ~Fenetre_choix_image();
	virtual void bouton_retour2();
	virtual void bouton_entrer1();
	virtual void bouton_entrer2();

};
