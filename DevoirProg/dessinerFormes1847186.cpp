// But :les fonctions dans se fichier cpp servent à dessiners des carrés,losanges et rectangles.
// Auteur : Nicolas Paquette
// Date : 2020/11/17


#include <iostream>//blibliothèque pour comminiquer avec la console et l'ordinateur
#include "Formes1847186.h"//blibliothèque du programmeur qui permet d'utiliser les fonctions tell que dessiner et traitrer les formes
#include "FonctionPratique1847186.h"//bilibliothèque du programmeur qui permet d'utiliser des fonctions pratique à fin de simplifier le code et les calculs
#include <string>//blibliothèque qui permet d'utiliser la fonction string qui permet d'afficher des caractaires dans la console
#include <ctime>//blibliothèque qui permet d'utiliser le temps (date et heure)

using namespace std;//permet d'utiliser les fonctions simple (cout,cin,if,ect..) sans utiliser std::cout

//fonction qui dessine un triangle dans la console avec paramètre la hauteur du triangle et le choix ,si le carre est plein ou vide
void dessinerCarre(int hauteur, int choixRemplissage) {

	for (int i = 1; i <= hauteur; i++)//boucle pour les colunme
	{
		cout << "*";//chaque debut de boucle une * s'affiche pour faire le coter gauche en colune
		for (int x = 1; x < hauteur; x++)//boucle qui permet de faire les lignes latéralle
		{
			if (i == 1 || i == hauteur)//permet d afficher le haut du carré et le bas
			{
				cout << "*";
			}
			else//premet d'afficher le milieu du carrer
			{
				afficheRemplissage(choixRemplissage);//fonction qui verifie si l'utilisateur veut son carrer vide ou plein et dependant du choix il affiche" "ou"#"
			}
		}
		cout << "*";//permet d'afficher le bas du carré
		cout << endl;//permet de passer a une autre colunme
	}



	return;//fonction void donc return rien

}
//fonction qui permet d'afficher un losange avec paramètre sa hauteur et son type de remplissage(plein,vide)choisi par l'utilisateur
void dessinerLosange(int hauteur, int choixRemplissage) {
	int count = hauteur / 2 + 1;//variable qui permet d'avoir le milieu du losagne
	int max = count;//varible qui part du milieu du losange et qui va aller vers la droit pour definir les deux coter a droit du losange
	int min = count;//varible qui part du milieu du losange et qui va aller vers la droit pour definir les deux coter a gauche du losange
	
	for (int i = 1; i <= hauteur; i++)//loop qui représente les colunme du losange
	{
		for (int x = 1; x <= hauteur; x++)//loop qui représente les lignes vertical du losange
		{
			if (x == min || x == max)//if qui lorsqu'ils sont vrai affiche une * pour dessiner les 4 coter du losange 
			{
				cout << "*";//affiche *
			}
			else if (x > min && x < max)//lorsque le min est plus grand que le x et que le x est plus petit que le x cela représente la milieu du losange et 
			{							//affiche le choix de l'utilisateur plein ou vide
				afficheRemplissage(choixRemplissage);///fonction qui verifie si l'utilisateur veut son carrer vide ou plein et dependant du choix il affiche" "ou"#"
			}
			else//le reste représente l'extérieur du losange donc le vide 
			{
				cout << " ";//affiche un espace
			}
		}
		if (i >= hauteur / 2 + 1)//ce if permet de modifier la trajectoir diaguonal des coter du losange donc cela inverse les sens
		{
			min++;//permet au coter droit de descendre vers la droite
			max--;//permet au coter gauche de descendre vers la gauche
		}
		else
		{
			min--;//permet au coter droit de descendre vers la gauche
			max++;//permet au coter gauche de descendre vers la droit
		}

		cout << endl;//permet de sauter une ligne pour passer a l'autre columne
	}


	return;//fonction void return rien
}
//fonction qui dessine un rectangle avec paramètre sa hauteur ,largeur et type de remplissage(vide ou plein)
void dessinerRectangle(int hauteur, int largeur, int choixRemplissage) {

	for (int i = 1; i <= hauteur; i++)//le for represente les columnes du rectangle
	{
		cout << "*";//affiche le coter gauche du rectangle
		for (int x = 2; x < largeur; x++) //for represente les lignes verticales du rectangle
		{
			if (i == 1 || i == hauteur)//les conditons represente le haut et le bas du rectangle
			{
				cout << "*";//affiche *
			}
			else//le reste est le milieu du carre
			{
				afficheRemplissage(choixRemplissage);//fonction qui affiche du vide ou un # selon le choix de l'utilisateur
			}
		}
		cout << "*";//affiche le coter droit du rectangle
		cout << endl;//saut de ligne permet de passer a la prochaine colunme
	}
	return;
}
