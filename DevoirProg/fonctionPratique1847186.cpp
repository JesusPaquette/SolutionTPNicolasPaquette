// But :les fonctions dans se fichier cpp servent à être utiliser de facon a simplifier des actions dans le programme 
// Auteur : Nicolas Paquette
// Date : 2020/11/17
#include <iostream>//blibliothèque pour comminiquer avec la console et l'ordinateur
#include "Formes1847186.h"//blibliothèque du programmeur qui permet d'utiliser les fonctions tell que dessiner et traitrer les formes
#include "Menus1847186.h"//bilibliothèque du programmeur qui permet d'utiliser des fonctions de type menus et les appelers
#include <string>//blibliothèque qui permet d'utiliser la fonction string qui permet d'afficher des caractaires dans la console
#include <ctime>//blibliothèque qui permet d'utiliser le temps (date et heure)

using namespace std;//permet d'utiliser les fonctions simple (cout,cin,if,ect..) sans utiliser std::cout

//fonction qui permet de generer un aléatoir assez realiste avec paramètre le max et le min qui designe quel tranche de nombre souhaite etre générer un nombre random
int genererAlea(int max, int min)
{
	// srand(time(NULL));   Il ne faut pas mettre la graine de l'aléa dans la fonction qui génère le nombre
	// Le srand va uniquement au début du programme principal.
	return rand() % (max - min + 1) + (min);
}


//fonction qui permet d'afficher le choix du paramètre donc soit plein ou vide
void choix(int choixRemplissage) {
	
	switch (choixRemplissage)//vient prendre la valeur du paramètre choixremplissage pour l'enovoyer vers la bonne actions
	{
	case 1:cout<< "plein";//ici si le paramètre vaut 1 affiche plein

		break;

	case 2:cout<<"vide";//ici si le paramètre vaut 1 affiche vide


		break;
	}

	return;
}
//fonction qui permet afficher le choix de l'utilisateur qui est en paramètre de la fonction et qui affiche plein ou vide 
void afficheRemplissage(int choixRemplissage) {
	
	switch (choixRemplissage)//vient prendre la valeur du paramètre choixremplissage pour l'enovoyer vers la bonne actions
	{
	case 1: cout<< "#";//ici le paramètre vaut 1 et affiche #
		break;
	case 2:	cout<< " ";//ici le paramètre vaut 2 et affiche space
		break;
	}
	return;
}

//fonction qui permet de prendre une valeur et de s'assurer qu'il est un entier et non une lettre ou autre et qui le renvoie apres avoir ete tester positif(au covid)
int saisirEntier()
{
	string clavier;

	getline(cin, clavier, '\n');            // Permet de stocker les caractères dans la variable clavier 
											// et de nettoyer la mémoire du clavier
	// Autre problème : stoi plante le programme si la chaine de caractères ne contient pas des chiffres
	// comme premiers caractères ou si elle est vide

	// Tant que 1. clavier est vide (clavier.empty() ou clavier == "") OU
	//          2. clavier ne commence pas (at(0), front(), [0]) par un chiffre (valeur positive) OU  commence  par le signe - et n'est pas suivi d'un chiffre




	/*while (!(!clavier.empty() && ((clavier.front() >= '0' && clavier.front() <= '9')
			|| (clavier.length() > 1 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier.at(1) <= '9'))))*/


	while ((clavier.empty() || ((clavier.front() < '0' || clavier.front() > '9')
		&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '9'))))


	{
		cout << "Erreur : vous devez entrer un entier." << endl;
		cout << "Veuillez entrer un nombre entier : ";
		getline(cin, clavier, '\n');            // Permet de stocker les caractères dans la variable clavier 
	}


	// Il faut maintenant convertir la chaine en entier
	return stoi(clavier);

	// Ici, si l'utilisateur tape une lettre, le cin >> la refuse et surtout laisse le caractère dans la mémoire du clavier
	// Il met 0 dans la variable int, même si ce n'est pas la bonne valeur
	// Et donc le programme part en boucle infinie car le deuxième cin >> récupère les caractères laissés 
	// dans la mémoire du clavier
	// Solution ==> lire tous les caractères tapés au clavier avec une chaine de caractères : string avec getline

}
//fonction qui permet de saisir un nombre impaire et qui est utiliser si le nombre est pair avec paramètre le nombre et le vérifie et le renvoie impaire
int NbImpaire(int nb) {
	
	cout << "Veuillez entrer un nombre impaire : ";//demande d'entrer un nombre impaire
	nb = saisirEntier();//saisie le nombre et s'assure avec la fonction saisirEntier() s'il est bien un entier et le renvoie
	
		while (nb % 2 == 0) //la condition de la boucle vérifie si le nombre rentrer est bien paire si oui il rentre dans la boucle et recommence tant qu'il est paire
		{
			cout << "Veuillez entrer un nombre impaire : ";//redemande un nombre impaire tant qu'il n'est pas impaire
			nb = saisirEntier();//saisie le nombre et s'assure avec la fonction saisirEntier() s'il est bien un entier et le renvoie
		}
		return nb;//retourne le nombre impaire 
}