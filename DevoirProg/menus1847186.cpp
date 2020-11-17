// But :les fonctions dans se fichier cpp servent a appeler les menus et les afficher et retourner les choix au main pour par la suite choisir sa forme
//		et son type plein ou vide
// Auteur : Nicolas Paquette
// Date : 2020/11/17

#include <iostream>//blibliothèque pour comminiquer avec la console et l'ordinateur
#include "FonctionPratique1847186.h"//bilibliothèque du programmeur qui permet d'utiliser des fonctions pratique à fin de simplifier le code et les calculs
#include "Menus1847186.h"//bilibliothèque du programmeur qui permet d'utiliser des fonctions de type menus et les appelers
#include <string>//blibliothèque qui permet d'utiliser la fonction string qui permet d'afficher des caractaires dans la console
#include <ctime>//blibliothèque qui permet d'utiliser le temps (date et heure)

using namespace std;//permet d'utiliser les fonctions simple (cout,cin,if,ect..) sans utiliser std::cout

//fonction est appeler dans le main pour choisir le menu a afficher 1 ou 2 et affiche les choix permis et cette fonctionn prend en paramètre le menu 1 ou 2 a afficher en paramètre
//et aussi le max qui sont le nombre maximum d'option dans le choix de menu et apres avoir afficher celui-ci prend la valeur du choix et la traitre pour la renvoyer au main
int validerMenu(int nbMenu, int max)
{
	int choix;//variable qui va contenur le nombre entrer par l'utilisateur dans le programme

	switch (nbMenu)//switch prend la valeur du nbMenu pour l'enovyer au bon cas qui veut le bon menu
	{
	case 1:afficherMenu1();//lorsque la valeur nbMenu est 1 vient afficher la fonction afficherMenu1()
		break;

	case 2:afficherMenu2();//lorsque la valeur nbMenu est 2 vient afficher la fonction afficherMenu2()
		break;
	}
	choix = saisirEntier();//vient saisr le choix de l'utilisateur et s'assurce avec la fonction saisirEntier() que cest bien un nombre

	//la boucle while sert a s'assurer que le choix rentrer est bien dans les limite des choix représenter avec le paramètre max qui est le maximum du menu entrer
	while(choix > max || choix < 1)
	{
		cout << "Veuiller entrer un nombre entre 1 et " << max << ": ";//demande a l'utilisateur d entrer un nombre en 1 et le maximum entrer en paramètre de la fonction

		choix = saisirEntier();//saisie le nomnre et s'assure avec la fonction saisirEntier() qu'il est bien un nombre
		
	}
	return  choix;//retourne un le choix au main 
}
//fonction afficherMenu1 permet d'afficher un menu pour montre les formes choissable et demande le choix lorsqu'il est appeler dans validerMenu()
void afficherMenu1()
{
	//affiche les types de formes a et demande laquel choisir
	cout << "Choisissez la forme : \n1. Rectangle\n2. Triangle\n3. Carre\n4. Losange\n5. Quitter\nVotre Choix ---> ";
	return;
}
//fonction afficherMenu2 permet d'afficher un menu qui demande si l'utilisateur veut la forme choissi pleine ou vide
void afficherMenu2()
{
	//affiche le choix pour l'utilisateur si plein ou vide et demande de faire un choix
	cout << "Choisissez le remplissage : \n1. Forme pleine\n2. Forme vide\n3. Retour au menu precedent\nVotre choix --->";
	return;
}

