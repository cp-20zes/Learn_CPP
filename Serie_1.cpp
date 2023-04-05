#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    // Exercice 1.1
    /*string prenom, nom;
    cout << "Quel est votre pr\x82nom ? : ";
    getline(cin, prenom);

    cout << "Bonjour " << prenom << "\n";*/

    // Exercice 1.2
    /*string prenom, nom;
    cout << "Quel est votre pr\x82nom ? : ";
    getline(cin, prenom);
    cout << prenom << " comment ? : ";
    getline(cin, nom);

    cout << "Bonjour " << prenom << " " << nom << endl;*/

    // Exercice 1.3
    /*int anneeNaissance;
    int annee = 2023;
    cout << "Bonjour\n";
    cout << "Quelle est l'annee de votre naissance ? : ";
    cin >> anneeNaissance;

    cout << "Votre age est de " << annee - anneeNaissance << endl;*/

    // Exercice 1.4
    /*time_t t = time(nullptr);
    tm *const pTInfo = localtime(&t);
    int anneeCourante = 1900 + pTInfo->tm_year;

    int anneeNaissance;

    cout << "Quelle est l'annee de votre naissance ? : ";
    cin >> anneeNaissance;
    int age = anneeCourante - anneeNaissance;
    cout << "Aujourd'hui, nous sommes en " << anneeCourante << " donc vous avez " << age << " ans\n";*/

    // Exercice 1.5
    /*double largeur, hauteur;

    cout << "Calcul du perimetre et de l'aire d'un rectangle\n";

    cout << "Entrez la largeur du rectangle : ";
    cin >> largeur;

    cout << "Entrez la hauteur du rectangle : ";
    cin >> hauteur;

    double perimetre = 2*largeur + 2*hauteur;
    double aire = largeur*hauteur;

    cout << "Le perimetre vaut " << perimetre << "\n";
    cout << "L'aire vaut " << aire << "\n";*/

    // Exercice 1.6
    /*double rayon, pourtour, aire;

    cout << "Calcul du pourtour et de l'aire d'un cercle\n";

    cout << "Entrez le rayon du cercle : ";
    cin >> rayon;

    pourtour = 2 * M_PI * rayon;
    aire = M_PI * rayon * rayon;

    cout << "Le cercle a un pourtour de " << pourtour << " et une aire de " << aire << endl;*/

    // Exercice 1.7
    /*double prix, prixTTC;
    cout << "Calcul du prix TTC d'un produit HT pour la Suisse\n";

    cout << "Entrez le prix de votre produit HT : ";
    cin >> prix;

    prixTTC = (prix/100) * 107.7;

    cout << "Le prix TTC est de " << prixTTC << " SFr\n";*/

    return 0;

}