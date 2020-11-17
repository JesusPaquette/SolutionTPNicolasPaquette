// But :les fonctions dans se fichier cpp servent a traiter les donn�s des formes :carr�,losange,rectangle
// Auteur : Nicolas Paquette
// Date : 2020/11/17

#include <iostream>//bliblioth�que pour comminiquer avec la console et l'ordinateur
#include "Formes1847186.h"//bliblioth�que du programmeur qui permet d'utiliser les fonctions tell que dessiner et traitrer les formes
#include "FonctionPratique1847186.h"//biliblioth�que du programmeur qui permet d'utiliser des fonctions pratique � fin de simplifier le code et les calculs
#include <string>//bliblioth�que qui permet d'utiliser la fonction string qui permet d'afficher des caractaires dans la console
#include <ctime>//bliblioth�que qui permet d'utiliser le temps (date et heure)

using namespace std;//permet d'utiliser les fonctions simple (cout,cin,if,ect..) sans utiliser std::cout

//cest fonction demande a l'utilisateur la hauteur du carr� et affiche les carract�ristique(hauteur,(vide ou plein)) du carrer avant de lappeler
void traiterCarre(int choixRemplissage) {
	int hauteur;//varibale haueur du carr�
	
	//demande a l'utilisateur la hauteur
	cout << "Entrez la hauteur du carre : ";
	hauteur = saisirEntier();//vient saisir la hauteur en s'assurant qu'il soit un nombre
	cout << endl;
	//affiche les caract�ristique du carr� et appel la fonction pour le dessiner
	cout << "Voici votre carre ";
	choix(choixRemplissage);//affiche vide ou plein
	cout<< " de hauteur " << hauteur << endl;

	dessinerCarre(hauteur, choixRemplissage);//fonction qui va dessiner le carrer avec les param�tre (hauteur,choix (vide ou plein))

	return;
}
//cest fonction demande a l'utilisateur la hauteur du losange et test si la hauteur est bien impaire sinon sa ne fonctione pas.
//de plus,affiche les carract�ristique(hauteur,(vide ou plein)) du carrer avant de lappeler
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
	
	//affiche les caract�ristique du losange et appel la fonction pour le dessiner
	cout << "Voici votre Losange ";
	choix(choixRemplissage);//affiche vide ou plein
	cout << " de hauteur " << hauteur << endl;
	dessinerLosange(hauteur, choixRemplissage);//appel la fonction pour le dessiner avec les param�tre hauteur et choix(vide ou plein)
	return;
}
//cest fonction demande a l'utilisateur la hauteur et la largeur du rectangle et affiche les carract�ristique(hauteur,largeur,(vide ou plein)) 
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
	//affiche les caract�ristique du rectangle et appel la fonction pour le dessiner
	cout << "Voici votre rectangle ";
	choix(choixRemplissage);//affiche vide ou plein
	cout << " de " << hauteur << "x" << largeur << endl;
	dessinerRectangle(hauteur, largeur, choixRemplissage);//fonction qui va dessiner le rectangle avec les param�tre (hauteur,largeur,choix (vide ou plein))
	return;
}