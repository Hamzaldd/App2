// G3app.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include "Compte.h"
#include "Compte_Epargne.h"
#include "Compte_Payant.h"
#include "Compte_payant_epargne.h"
using namespace Banque;
using namespace std;
int main()
{
    
    // creation static d'objets c1 et c2
    //Compte c1(nom1, 20000); // avec parametres
    //Compte c2(nom2, 10000); 
 

    // creation dynamique d'objet
   // Compte* c3 = new Compte(nom1, 30000);
    //c1.consulterSolde();
   /* c1.transfererArgent(&c2, 5000);
    c1.consulterSolde(); //15000
    c2.consulterSolde(); //15000
    c3->consulterSolde(); 
    c3->deposerArgent(5000);
    */

    Devise* D = new Devise(10000);
    Devise* M = new Devise(4000);
    Devise* Ma = new Devise(1000);
    Client* C = new Client("cl", "cl", "cl");
    Devise* M2 = new Devise(1000);
    Client* A= new Client("cl", "cl", "cl");
    Devise* M1 = new Devise(1000);
    Client* B = new Client("cl", "cl", "cl");
    Compte_payant_epargne* CPE = new Compte_payant_epargne(D, C, 0.5, 0.6);
    Compte_Payant* CP = new Compte_Payant(A, M, 0.5);
    Compte_Epargne* CE = new Compte_Epargne(M1,B, 0.3);
    CPE->deposerArgent(M);
    CPE->consulterSolde();
    CPE->retirerArgent(Ma);
    CPE->consulterSolde();
    CE->deposerArgent(M2);
    CE->consulterSolde();
    CE->transfererArgent(CP,M);
    CP->consulterSolde();
    CE->operationscompte();
    CPE->operationscompte();
    //CPE->retirerArgent(M);
    //CPE->consulterSolde();
    
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
