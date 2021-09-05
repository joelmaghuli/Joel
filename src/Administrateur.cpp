#include<iostream>
#include "Client_banque.h"
#include<string>

using namespace std;
Client_banque::Client_banque() {};
Client_banque::Client_banque(int compt,std::string nomi,int paw,double cc,double ce){
         id=compt;
         nom=nomi;
         pw=paw;
         ccourant=cc;
         cepargne=ce;
};
