#include <iostream>

using namespace std;

int main(){

	// Exercice 2.1
	/*double dividende, diviseur;

	cout << "\x1B[2J\x1B[H";
	cout << "Division impossible\n";

	cout << "Entrez le dividende (nombre a diviser) : ";
	cin >> dividende;

	cout << "Entrez le diviseur : ";
	cin >> diviseur;

	if(diviseur == 0){
		cout << "Erreur\n";
	} else {
		cout << "Le resultat est " << dividende / diviseur << endl;
	}*/


	// Exerice 2.2
	/*int mois;

	cout << "Test de la validité d'un mois\n";

	cout << "Entrez le numéro du mois : ";
	cin >> mois;

	if(mois < 1 || mois > 12){
		cout << "Le mois est incorrect";
	} else{
		cout << "Le mois est correcte";
	}*/


	// Exercice 2.3
	/*double temp;
	cout << "Les états de l'eau\n";

	cout << "Quelle est la température de l'eau ? : ";
	cin >> temp;

	if(temp <= 0){
		cout << "L'eau est à l'état solide\n";
	}
	else if(temp > 0 && temp < 100){
		cout << "L'eau est à l'état liqude\n";
	}
	else{
		cout << "L'eau est à l'état gazeux\n";	
	}*/


	// Exercice 2.4
	/*int annee;

	cout << "Test des années bissextiles\n";

	cout << "Quelle est l'année que vous voulez tester ? : ";
	cin >> annee;

	if(annee % 4 == 0 && !(annee % 100 == 0) || annee % 400 == 0){
		cout << "L'année " << annee << " est bissextile\n";
	} else {
		cout << "L'année " << annee << " n'est pas bissextile\n";
	}*/


	// Exercice 2.5
	int nombre;

	cout << "Nombre pair ou impair ?\n";

	cout << "Entrez un nombre : ";
	cin >> nombre;

	if(nombre % 2 == 0){
		cout << "Le nombre est pair\n";
	} else{
		cout << "Le nombre est impair\n";
	}

	return 0;

}