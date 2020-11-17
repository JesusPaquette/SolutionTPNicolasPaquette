// But :les fonctions dans se fichier cpp servent � �tre utiliser de facon a simplifier des actions dans le programme 
// Auteur : Nicolas Paquette
// Date : 2020/11/17
#include <iostream>//bliblioth�que pour comminiquer avec la console et l'ordinateur
#include "Formes1847186.h"//bliblioth�que du programmeur qui permet d'utiliser les fonctions tell que dessiner et traitrer les formes
#include "Menus1847186.h"//biliblioth�que du programmeur qui permet d'utiliser des fonctions de type menus et les appelers
#include <string>//bliblioth�que qui permet d'utiliser la fonction string qui permet d'afficher des caractaires dans la console
#include <ctime>//bliblioth�que qui permet d'utiliser le temps (date et heure)

using namespace std;//permet d'utiliser les fonctions simple (cout,cin,if,ect..) sans utiliser std::cout

//fonction qui permet de generer un al�atoir assez realiste avec param�tre le max et le min qui designe quel tranche de nombre souhaite etre g�n�rer un nombre random
int genererAlea(int max, int min)
{
	// srand(time(NULL));   Il ne faut pas mettre la graine de l'al�a dans la fonction qui g�n�re le nombre
	// Le srand va uniquement au d�but du programme principal.
	return rand() % (max - min + 1) + (min);
}


//fonction qui permet d'afficher le choix du param�tre donc soit plein ou vide
void choix(int choixRemplissage) {
	
	switch (choixRemplissage)//vient prendre la valeur du param�tre choixremplissage pour l'enovoyer vers la bonne actions
	{
	case 1:cout<< "plein";//ici si le param�tre vaut 1 affiche plein

		break;

	case 2:cout<<"vide";//ici si le param�tre vaut 1 affiche vide


		break;
	}

	return;
}
//fonction qui permet afficher le choix de l'utilisateur qui est en param�tre de la fonction et qui affiche plein ou vide 
void afficheRemplissage(int choixRemplissage) {
	
	switch (choixRemplissage)//vient prendre la valeur du param�tre choixremplissage pour l'enovoyer vers la bonne actions
	{
	case 1: cout<< "#";//ici le param�tre vaut 1 et affiche #
		break;
	case 2:	cout<< " ";//ici le param�tre vaut 2 et affiche space
		break;
	}
	return;
}

//fonction qui permet de prendre une valeur et de s'assurer qu'il est un entier et non une lettre ou autre et qui le renvoie apres avoir ete tester positif(au covid)
int saisirEntier()
{
	string clavier;

	getline(cin, clavier, '\n');            // Permet de stocker les caract�res dans la variable clavier 
											// et de nettoyer la m�moire du clavier
	// Autre probl�me : stoi plante le programme si la chaine de caract�res ne contient pas des chiffres
	// comme premiers caract�res ou si elle est vide

	// Tant que 1. clavier est vide (clavier.empty() ou clavier == "") OU
	//          2. clavier ne commence pas (at(0), front(), [0]) par un chiffre (valeur positive) OU  commence  par le signe - et n'est pas suivi d'un chiffre




	/*while (!(!clavier.empty() && ((clavier.front() >= '0' && clavier.front() <= '9')
			|| (clavier.length() > 1 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier.at(1) <= '9'))))*/


	while ((clavier.empty() || ((clavier.front() < '0' || clavier.front() > '9')
		&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '9'))))


	{
		cout << "Erreur : vous devez entrer un entier." << endl;
		cout << "Veuillez entrer un nombre entier : ";
		getline(cin, clavier, '\n');            // Permet de stocker les caract�res dans la variable clavier 
	}


	// Il faut maintenant convertir la chaine en entier
	return stoi(clavier);

	// Ici, si l'utilisateur tape une lettre, le cin >> la refuse et surtout laisse le caract�re dans la m�moire du clavier
	// Il met 0 dans la variable int, m�me si ce n'est pas la bonne valeur
	// Et donc le programme part en boucle infinie car le deuxi�me cin >> r�cup�re les caract�res laiss�s 
	// dans la m�moire du clavier
	// Solution ==> lire tous les caract�res tap�s au clavier avec une chaine de caract�res : string avec getline

}
//fonction qui permet de saisir un nombre impaire et qui est utiliser si le nombre est pair avec param�tre le nombre et le v�rifie et le renvoie impaire
int NbImpaire(int nb) {
	
	cout << "Veuillez entrer un nombre impaire : ";//demande d'entrer un nombre impaire
	nb = saisirEntier();//saisie le nombre et s'assure avec la fonction saisirEntier() s'il est bien un entier et le renvoie
	
		while (nb % 2 == 0) //la condition de la boucle v�rifie si le nombre rentrer est bien paire si oui il rentre dans la boucle et recommence tant qu'il est paire
		{
			cout << "Veuillez entrer un nombre impaire : ";//redemande un nombre impaire tant qu'il n'est pas impaire
			nb = saisirEntier();//saisie le nombre et s'assure avec la fonction saisirEntier() s'il est bien un entier et le renvoie
		}
		return nb;//retourne le nombre impaire 
}