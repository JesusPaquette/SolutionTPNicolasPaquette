// But :les fonctions dans se fichier cpp servent a traiter les donnés des formes :carré,losange,rectangle
// Auteur : Nicolas Paquette
// Date : 2020/11/17

#include <iostream>//blibliothèque pour comminiquer avec la console et l'ordinateur
#include "Formes1847186.h"//blibliothèque du programmeur qui permet d'utiliser les fonctions tell que dessiner et traitrer les formes
#include "FonctionPratique1847186.h"//bilibliothèque du programmeur qui permet d'utiliser des fonctions pratique à fin de simplifier le code et les calculs
#include <string>//blibliothèque qui permet d'utiliser la fonction string qui permet d'afficher des caractaires dans la console
#include <ctime>//blibliothèque qui permet d'utiliser le temps (date et heure)

using namespace std;//permet d'utiliser les fonctions simple (cout,cin,if,ect..) sans utiliser std::cout

//cest fonction demande a l'utilisateur la hauteur du carré et affiche les carractéristique(hauteur,(vide ou plein)) du carrer avant de lappeler
void traiterCarre(int choixRemplissage) {
	int hauteur;//varibale haueur du carré
	
	//demande a l'utilisateur la hauteur
	cout << "Entrez la hauteur du carre : ";
	hauteur = saisirEntier();//vient saisir la hauteur en s'assurant qu'il soit un nombre
	cout << endl;
	//affiche les caractéristique du carré et appel la fonction pour le dessiner
	cout << "Voici votre carre ";
	choix(choixRemplissage);//affiche vide ou plein
	cout<< " de hauteur " << hauteur << endl;

	dessinerCarre(hauteur, choixRemplissage);//fonction qui va dessiner le carrer avec les paramètre (hauteur,choix (vide ou plein))

	return;
}
//cest fonction demande a l'utilisateur la hauteur du losange et test si la hauteur est bien impaire sinon sa ne fonctione pas.
//de plus,affiche les carractéristique(hauteur,(vide ou plein)) du carrer avant de lappeler
void traiterLosange(int choixRemplissage) {
	int hauteur;//varible pour la hauteur du losange

	//demande a l'utilisateur la hauteur
	cout << "Entrer la hauteur du losange : ";
	hauteur = saisirEntier();//vient saisir la hauteur en s'assurant qu'il soit un nombre
	//if vient tester si le nombre est bien impaire
	if (hauteur%2==0)
	{
		hauteur = NbImpaire(hauteur);//cette fonction redemande un nombre impaire renvoie un nombre impaire 
	}
	else//serre a rien...
	{

	}
	
	//affiche les caractéristique du losange et appel la fonction pour le dessiner
	cout << "Voici votre Losange ";
	choix(choixRemplissage);//affiche vide ou plein
	cout << " de hauteur " << hauteur << endl;
	dessinerLosange(hauteur, choixRemplissage);//appel la fonction pour le dessiner avec les paramètre hauteur et choix(vide ou plein)
	return;
}
//cest fonction demande a l'utilisateur la hauteur et la largeur du rectangle et affiche les carractéristique(hauteur,largeur,(vide ou plein)) 
void traiterRectangle(int choixRemplissage) {
	//varible pour la hauteur et la largeur du rectangle
	int hauteur;
	int largeur;
	//demande la hauteur a l'utilisateur
	cout << "Entrez la hauteur du rectangle : ";
	hauteur = saisirEntier();//vient saisir la hauteur en s'assurant qu'il soit un nombre
	cout << endl;
	//demande la largeur a l'utilisateur
	cout << "Entrez la largeur du rectangle : ";
	largeur = saisirEntier();//vient saisir la hauteur en s'assurant qu'il soit un nombre
	cout << endl;
	//affiche les caractéristique du rectangle et appel la fonction pour le dessiner
	cout << "Voici votre rectangle ";
	choix(choixRemplissage);//affiche vide ou plein
	cout << " de " << hauteur << "x" << largeur << endl;
	dessinerRectangle(hauteur, largeur, choixRemplissage);//fonction qui va dessiner le rectangle avec les paramètre (hauteur,largeur,choix (vide ou plein))
	return;
}