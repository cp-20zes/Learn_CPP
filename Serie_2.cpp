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
	int mois;

	cout << "Test de la validité d'un mois\n";

	cout << "Entrez le numéro du mois : ";
	cin >> mois;

	if(mois < 1 || mois > 12){
		cout << "Le mois est incorrect";
	} else{
		cout << "Le mois est correcte";
	}

	return 0;

}