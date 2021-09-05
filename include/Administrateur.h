#ifndef CLIENT_BANQUE_H
#define CLIENT_BANQUE_H
#include<string>
#include<iostream>
#include <stdlib.h>
extern void creercompte();
extern void login();
extern void consultercompte(int id);
extern void retourner();
extern int main();
extern void affichage_clients();
extern void depot (int idd);
extern void retrait (int idr);
extern void virement (int iv);
extern void balance(int ib);

class Client_banque
{
    public:
        Client_banque();
        Client_banque(int compt,std::string nomi,int paw,double cc,double ce);
        int id;
        std::string nom;
        int pw;
        double ccourant;
        double cepargne;
};

#endif // CLIENT_BANQUE_H
