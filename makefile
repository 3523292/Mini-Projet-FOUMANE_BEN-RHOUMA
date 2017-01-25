all: main

main: Fenetre_mere.o Fenetre.o Fenetre_admin.o Fenetre_user.o Fenetre_choix_election.o Fenetre_choix_image.o Fenetre_info1.o Fenetre_identification.o Fenetre_election.o Fenetre_resultat.o Personne.o User.o Electeur.o Candidat.o Admin.o Parti_politique.o Region.o Election.o monProg.o
 
	g++ --std=c++11 -Wall Fenetre_mere.o Fenetre.o Fenetre_admin.o Fenetre_user.o Fenetre_choix_election.o Fenetre_choix_image.o Fenetre_info1.o Fenetre_identification.o Fenetre_election.o Fenetre_resultat.o Personne.o User.o Electeur.o Candidat.o Admin.o Parti_politique.o Region.o Election.o monProg.o -o monProg `pkg-config gtkmm-3.0 --cflags --libs`
	
monProg.o: main.cc
	g++ --std=c++11 -Wall -c main.cc -o monProg.o `pkg-config gtkmm-3.0 --cflags --libs`
	
Fenetre_mere.o: Fenetre_mere.hh Fenetre_mere.cc
	g++ --std=c++11 -Wall -c Fenetre_mere.cc `pkg-config gtkmm-3.0 --cflags --libs`
	
Fenetre.o: Fenetre.hh Fenetre.cc
	g++ --std=c++11 -Wall -c Fenetre.cc `pkg-config gtkmm-3.0 --cflags --libs`

Fenetre_admin.o: Fenetre_admin.hh Fenetre_admin.cc
	g++ --std=c++11 -Wall -c Fenetre_admin.cc `pkg-config gtkmm-3.0 --cflags --libs`
	
Fenetre_info1.o: Fenetre_info1.hh Fenetre_info1.cc
	g++ --std=c++11 -Wall -c Fenetre_info1.cc `pkg-config gtkmm-3.0 --cflags --libs`
	
Fenetre_user.o: Fenetre_user.hh Fenetre_user.cc
	g++ --std=c++11 -Wall -c Fenetre_user.cc `pkg-config gtkmm-3.0 --cflags --libs`
	
Fenetre_identification.o: Fenetre_identification.hh Fenetre_identification.cc
	g++ --std=c++11 -Wall -c Fenetre_identification.cc `pkg-config gtkmm-3.0 --cflags --libs`
	
Fenetre_choix_election.o: Fenetre_choix_election.hh Fenetre_choix_election.cc
	g++ --std=c++11 -Wall -c Fenetre_choix_election.cc `pkg-config gtkmm-3.0 --cflags --libs`
	
Fenetre_choix_image.o: Fenetre_choix_image.hh Fenetre_choix_image.cc
	g++ --std=c++11 -Wall -c Fenetre_choix_image.cc `pkg-config gtkmm-3.0 --cflags --libs`
	
Fenetre_election.o: Fenetre_election.hh Fenetre_election.cc
	g++ --std=c++11 -Wall -c Fenetre_election.cc `pkg-config gtkmm-3.0 --cflags --libs`
	
Fenetre_resultat.o: Fenetre_resultat.hh Fenetre_resultat.cc
	g++ --std=c++11 -Wall -c Fenetre_resultat.cc `pkg-config gtkmm-3.0 --cflags --libs`
	
Personne.o : Personne.hh Personne.cc
	g++ -Wall -c -g Personne.cc
	
User.o : User.cc User.hh
	g++ -Wall -c -g User.cc

Electeur.o : Electeur.cc Electeur.hh
	g++ -Wall -c -g Electeur.cc
	
Candidat.o : Candidat.cc Candidat.hh
	g++ -Wall -c -g Candidat.cc
	
Admin.o : Admin.cc Admin.hh
	g++ -Wall -c -g Admin.cc

Parti_politique.o : Parti_politique.cc Parti_politique.hh
	g++ -Wall -c -g Parti_politique.cc
	
Region.o : Region.cc Region.hh
	g++ -Wall -c -g Region.cc
	
Election.o : Election.cc Election.hh
	g++ -Wall -c -g Election.cc

clean: 
	rm -f *.o *~monProg.o
