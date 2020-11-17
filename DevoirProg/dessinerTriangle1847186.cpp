// But :les fonctions dans se fichier cpp servent à dessiners des triangles.
// Auteur : Nicolas Paquette
// Date : 2020/11/17


#include <iostream>//blibliothèque pour comminiquer avec la console et l'ordinateur
#include "Formes1847186.h"//blibliothèque du programmeur qui permet d'utiliser les fonctions tell que dessiner et traitrer les formes
#include "FonctionPratique1847186.h"//bilibliothèque du programmeur qui permet d'utiliser des fonctions pratique à fin de simplifier le code et les calculs
#include <string>//blibliothèque qui permet d'utiliser la fonction string qui permet d'afficher des caractaires dans la console
#include <ctime>//blibliothèque qui permet d'utiliser le temps (date et heure)

using namespace std;//permet d'utiliser les fonctions simple (cout,cin,if,ect..) sans utiliser std::cout

/*fonctions dessiner triangle position 1 avec paramètre sa hauteur et son type de remplissage (vide ou plein)

exemple position1
*
**
*#*
*##*
*****
*/
void dessinerTriangle1(int hauteur, int choixRemplissage){
	int compteur = 1;//variable compteur pour definir la longueur des lignes
	for (int i = 0; i < hauteur; i++)//loop pour les colunmes
	{
		for (int x = 1; x <= compteur; x++)//loop pour dessiner les lignes verticales
		{
			if (i == hauteur - 1 || x == hauteur || x == 1 || x == compteur)//if avec les conditions qui représente les coter du triangle avec *
			{
				cout << "*";//affiche *
			}
			else//le reste représente le milieu du triangle
			{
				afficheRemplissage(choixRemplissage);//fonction avec le paramètre du choix de remplissage qui affiche le choix de l'utilisateur si plein ou vide
			}

		}
		compteur++;//augemnt la longueur des lignes a chaque columne 
		cout << endl;//saute une ligne pour passer prochaine colunme
	}
	return;//void return rien
}
/*fonctions dessiner triangle position 2 avec paramètre sa hauteur et son type de remplissage (vide ou plein)

exemple position2
*****
*##*
*#*
**
*
*/
void dessinerTriangle2(int hauteur, int choixRemplissage) {
	int compteur = hauteur;//variable compteur pour definir la longueur des lignes
	for (int i = 0; i < hauteur; i++)//loop pour les colunmes
	{

		for (int x = 1; x <= compteur; x++) // loop pour dessiner les lignes verticales
		{
			if (i == 0 || x == hauteur || x == 1 || x == compteur)//if avec les conditions qui représente les coter du triangle avec *
			{
				cout << "*";//affiche *
			}
			else//le reste représente le milieu du triangle
			{
				afficheRemplissage(choixRemplissage);//fonction avec le paramètre du choix de remplissage qui affiche le choix de l'utilisateur si plein ou vide
			}

		}
		compteur--;//diminu la longueur des lignes a chaque columnes pour donner la formes position 2
		cout << endl;//saute une ligne pour passer prochaine colunme
	}
	return;//fonctions void retourn rien
}
/*fonctions dessiner triangle position 3 avec paramètre sa hauteur et son type de remplissage (vide ou plein)

exemple position3
*****
 *##*
  *#*
   **
    *
*/
void dessinerTriangle3(int hauteur, int choixRemplissage) {

	int compteur = 1;//variable compteur pour definir la longueur des lignes
	for (int i = 1; i <= hauteur; i++) //loop pour les colunmes
	{
		for (int x = 1; x <= hauteur; x++)// loop pour dessiner les lignes verticales
		{
			if (x >= compteur)//des que le x est egal ou plus grand que le compteur cela reprente l'air du triangle
			{
				if (x == compteur || i == 1 || x == hauteur)//cest condition représente les coter du triangle
				{
					cout << "*";//affiche *
				}
				else//le reste represente le milieu du triangle
				{
					afficheRemplissage(choixRemplissage);//fonction avec paramètre le choix du remplissage de l'utilisateur qui affiche soit " "ou"#"
				}
			}
			else// se reste represente l'extérieur du programme
			{
				cout << " ";//qui affiche un espace 
			}
		}
		cout << endl;//permet de sauter a la prochaine ligne
		compteur++;//permet au ligne du triangle d'augmenter a chaque column
	}
	return;//retour rien fonction void
}
/*fonctions dessiner triangle position 4 avec paramètre sa hauteur et son type de remplissage (vide ou plein)

exemple position4
	*  
   **
  *#*
 *##*
*****
*/
void dessinerTriangle4(int hauteur, int choixRemplissage) {
	int compteur = hauteur;//variable compteur pour definir la longueur des lignes
	for (int i = 1; i <= hauteur; i++)//loop pour les colunmes
	{
		for (int x = 1; x <= hauteur; x++)// loop pour dessiner les lignes verticales
		{
			if (x >= compteur)//des que le x est egal ou plus grand que le compteur cela reprente l'air du triangle
			{
				if (x == compteur || x == hauteur || i == hauteur)//cest condition représente les coter du triangle
				{
					cout << "*";//affiche *
				}
				else // le reste represente le milieu du triangle
				{
					afficheRemplissage(choixRemplissage);//fonction avec paramètre le choix du remplissage de l'utilisateur qui affiche soit " "ou"#"
				}
			}
			else// se reste represente l'extérieur du programme
			{
				cout << " ";//qui affiche un espace 
			}
		}
		cout << endl;//permet de sauter a la prochaine ligne
		compteur--;//permet au ligne du triangle de réduir a chaque columne
	}
	return;//retour rien fonction void
}