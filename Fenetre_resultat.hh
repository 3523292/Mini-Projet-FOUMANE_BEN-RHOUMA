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
#include <glibmm/ustring.h>
#include <gtkmm/progressbar.h>


using namespace std;

class Fenetre_resultat: public Fenetre_mere{
	/*	Attributs	*/
private:		
	int largeur;
	int hauteur;
	Gtk::Label _text1;
	Gtk::Label _text2;
	Gtk::Button entrer;
	Gtk::ProgressBar _barreProgression1;
    Gtk::ProgressBar _barreProgression2;
	Gtk::HButtonBox boiteBoutonsH;
	Gtk::VBox boiteBoutonsH1;
	Gtk::HBox h1 ;
	Gtk::HBox h2 ;
	Gtk::VBox b1;
	Gtk::VBox b2;
	Gtk::VBox b3;
	Gtk::VBox b4;
	Gtk::VBox boiteV;
	
	
	
	
public:
	Fenetre_resultat(Glib::ustring text1, Glib::ustring text2);
	~Fenetre_resultat();
	virtual void bouton_entrer();

};

