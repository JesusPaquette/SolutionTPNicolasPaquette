// But :fichier.ccp avec fonction qui traitre les donnés et appel des fonction pour executer le dessin d'un triangle
// Auteur : Nicolas Paquette
// Date : 2020/11/17

#include <iostream>//blibliothèque pour comminiquer avec la console et l'ordinateur
#include "Formes1847186.h"//blibliothèque du programmeur qui permet d'utiliser les fonctions tell que dessiner et traitrer les formes
#include "FonctionPratique1847186.h"//bilibliothèque du programmeur qui permet d'utiliser des fonctions pratique à fin de simplifier le code et les calculs
#include <string>//blibliothèque qui permet d'utiliser la fonction string qui permet d'afficher des caractaires dans la console
#include <ctime>//blibliothèque qui permet d'utiliser le temps (date et heure)

using namespace std;//permet d'utiliser les fonctions simple (cout,cin,if,ect..) sans utiliser std::cout

//fonction qui demande la hauteur a l'utilisateur et saisie la hauteur et appel une des fonction qui dessines une des 4 positons de tiangle.
//Par la suite,la fonction pour decidé quel position afficher ,elle appel genrerAlea(max,min) pour generer un nombre aleatoir qui va aller chercher la position 
//a dessiner.
void traiterTriangle(int choixRemplissage) {
	
	//variable
	int hauteur;//hauteur du triangle
	int positionChoix;//pour position des triangle avec la fonction genererAlea
	//variable const
	const int max = 4;//pour choisir un nombre random maximum
	const int min = 1;//pour choisir un nombre random minimum
	
	cout << "Entrez la hauteur du rectangle : ";//demande a l'utilisateur la hauteur
	hauteur = saisirEntier();//saisie la hauteur et s'assure que cest un nombre
	cout << endl;//saut de ligne
	//affiche comment le triangle va etre selon les donnes entrer par l'utilisateur 
	cout << "Voici votre triangle ";
	choix(choixRemplissage);//fonction qui test le choix du remplissage et affiche le choix vide ou plein
	cout<< " de hauteur " << hauteur << " :" << endl;
	
	positionChoix = genererAlea(max, min);//la fonction renvoie un nombre randome entre le maximum et le minium entrer en paramètre et le rentre dans positionChoix

	switch (positionChoix)//le swtich lie la valeur randome envoyer et va chercher la reponse envoyer 
	{
	case 1:dessinerTriangle1(hauteur, choixRemplissage);//vient dessiner la position 1 
		break;
	case 2:dessinerTriangle2(hauteur, choixRemplissage);//vient dessiner la position 2
		break;
	case 3:dessinerTriangle3(hauteur, choixRemplissage);//vient dessiner la position 3
		break;
	case 4:dessinerTriangle4(hauteur, choixRemplissage);//vient dessiner la position 4
		break;
	default:
		break;
	}

	return;
}