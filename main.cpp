#include <iostream>
#include <string>
#include"Users.h"
#include"fleurs.h"
#include <stdlib.h>
#define N 5
#define M 20

using namespace std;

int lignesf =10;
int lignes =2;
User list_admin[N];
Fleurs listfleurs[M];
Fleurs *listfleurs_pointeur = listfleurs;

void creerfleur(){
    lignesf++;                 //pour creer une fleur
double qt1=0;
if (lignesf<=M-1){
listfleurs[lignesf-1].id=(lignesf-1);
cout<<"\n   ENTER LE NOM DU TYPE DE LA FLEUR\n\n";
cin>>listfleurs[lignesf-1].nom;
rol:cout<<"\n   VEUILLEZ ENTRER LA QUANTITE\n\n";
cin>>qt1;
if (qt1<=0)
goto rol;
listfleurs[lignesf-1].qte=qt1;
system("cls");
cout<<"\n\n\n  LE TYPE DE FLEUR "<<listfleurs[lignesf-1].nom<< " A ETE CREE AVEC SUCCES: SON ID EST "<<listfleurs[lignesf-1].id<<"\n\n\n";
main();
}
else {
system("cls");
cout <<"\n\n Le nombre limite des types des fleurs \n\n";
main();
}
}
void affichage_fleurs(){               // fonction de l'affichage de tous les clients de la banque
    system("cls");
    int choix=0;
            cout<<" \n";
            cout<<"           AFFICHAGE DES TYPES DES FLEURS DE LA BOUTIQUE   \n";
            cout<<"      ====================================================== \n";

            cout<<"         -----------------------------------------------------\n";
            cout<<"         ID        NOM      QUANTITE DISPONIBLE     \n";
            cout<<"         -----------------------------------------------------\n";
            int i;
            for( i=0 ; i < lignesf; i++){
            cout<<"        "<<listfleurs[i].id;
            cout<<"        "<< listfleurs[i].nom ;
            cout<<"        "<<listfleurs[i].qte;
            cout<<"\n        -----------------------------------------------------\n";
            }
            cout<<"      ***********************************************************\n";
            cout<<"      ********            OPTIONS                         *******\n";
            cout<<"      ***********************************************************\n";
            cout<<"      **               RETOUT AU MENU: 1                       **\n";
            cout<<"      *********************************************************\n\n";
            cout<<"      Veuillez saisir votre choix : ";

            cin>>choix;
    if (choix==1){

        system("cls");
        main();

    }

    else{
    system("cls");
    cout<<"\n\n\n Veuillez bien faire votre choix SVP\n\n\n";
    affichage_fleurs();

}
}
void achat_fleur(){
system("cls");                         //le  password du client pour acceder a son compte
int nmr=0;
int nombre =0;
cout<<"\n\n VEUILLEZ SAISIR L'IDENTIFICATEUR DU TYPE DE LA FLEUR\n\n";
cin>>nmr;

for(int i=0;i<lignesf+1;i++){

    if(listfleurs[i].id==nmr){
    cout<<"\n\n    VEUILLEZ ENTRER LE NOMBRE SVP\n\n";
        cin>>nombre;
        if(nombre <= listfleurs[i].qte){
           listfleurs_pointeur[i].qte =(listfleurs[i].qte - nombre);
        cout<<"\n\n Achat effectue avec succes, ce type de fleurs a maintenant :"<<listfleurs[i].qte<<" pieces\n\n\n";
        affichage_fleurs();
        }else{
            system("cls");
            cout<<"\n\n\n Cette quantite est superieure à celle qui existe \n\n\n";
            achat_fleur();
        }
    break;
}else if(lignesf==i){
            cout<<"          CET TYPE DE FLEUR N'EXISTE PAS OU MAUVAIS ID \n";
            main();
            break;
            }
}

}

void moyenne_fleurs(){
    double moyenne=0;
    double somme =0;
    int i ;
    for(i=0;i< lignesf;i++){
        somme+=listfleurs[i].qte;
    }
    moyenne = somme/lignesf;
    cout<<"\n   LA MOYENNE ACTUELLE VAUT " <<moyenne<<"\n\n";
}
void menu_admin(){        //ici nous creons une fonction qui permet d'afficher le menu de l'admin
int choix=0;
cout<<"\n BIENVENU CHER ADMINISTRATEUR \n\n1.  AJOUTER UN TYPE DE FLEUR\n\n2.  VOIR LE RAPPORT DE STOCQUE \n\n3.  CALCULER LA MOYENNE\n\n4.  CALCULER LA VARIANCE\n\n5.  RETOUR\n\n  Faites votre choix SVP\n\n\n";
cin>>choix;
if (choix==1)
    creerfleur();
else if(choix==2)
    affichage_fleurs();
else if(choix==3)
    moyenne_fleurs();
else if (choix==4)
    retourner();
else if(choix==5)
    retourner();
else {
    system("cls");
    cout<<"\n\n\n Veuillez bien faire votre choix \n\n\n";

}
}
 void login_admin(){
system("cls");                         //le  password du client pour acceder a son compte
int mpw=0;
cout<<"\n\n VEUILLEZ SAISIR VOTRE MOT DE PASSE\n\n";
cin>>mpw;

for(int i=0;i<lignes+1;i++){

    if(list_admin[i].pw==mpw){
    system("cls");
    cout<<"\n\n\n MOT DE PASSE CORRECT \n\n\n";
    menu_admin();
    break;
}else if(lignes==i){
            cout<<"          CET ADMINISTRATEUR PAS OU MAUVAIS MOT DE PASSE \n";
            main();
            break;
            }
}

}
void retourner(){
system("cls");               // ici nous creons une fonction qui va permettre au client de retour au menu de la banque
main();
}


int main(){
    User us1 (0,"JOEL",11);
    User us2 (1,"BEN",22);
    list_admin[0]=us1;
    list_admin[1]=us2;

    Fleurs fl1 (0,"ROSE",100);
    Fleurs fl2 (1,"ACACIA",100);
    Fleurs fl3 (2,"MUGUET",100);
    Fleurs fl4 (3,"TOURNESOL",100);
    Fleurs fl5 (4,"LYS",100);
    Fleurs fl6 (5,"IRIS",100);
    Fleurs fl7 (6,"LAVANDE",100);
    Fleurs fl8 (7,"LIN",100);
    Fleurs fl9 (8,"OEILLET",100);
    Fleurs fl10 (9,"COQUELICOT",100);
        listfleurs[0]=fl1;
        listfleurs[1]=fl2;
        listfleurs[2]=fl3;
        listfleurs[3]=fl4;
        listfleurs[4]=fl5;
        listfleurs[5]=fl6;
        listfleurs[6]=fl7;
        listfleurs[7]=fl8;
        listfleurs[8]=fl9;
        listfleurs[9]=fl10;



    int choix=0;
            cout<<"      ***********************************************************\n";
            cout<<"      ***********     BIENVENUE A LA BOUTIQUUE         **********\n";
            cout<<"      ***********************************************************\n";
            cout<<"      ***********************************************************\n";
            cout<<"      ********            OPTIONS                         *******\n";
            cout<<"      ***********************************************************\n";
            cout<<"      **               VOIR LES FLEURS DE LA BOUTIQUE: 1       **\n";
            cout<<"      **               ACHETER UNE FLEUR: 2                    **\n";
            cout<<"      **               CONNEXION ADMINISSTRATEUR: 3            **\n";
            cout<<"      **                    QUITTER : 4                        **\n";
            cout<<"      *********************************************************\n\n";
            cout<<"      Veuillez saisir votre choix : ";
    cin>>choix;
    if (choix==1){
        affichage_fleurs();
    }
    else if(choix==2)
        achat_fleur();
    else if(choix==3)
        login_admin();
    else if(choix==4)
    system("exit");
    else{
    system("cls");
    cout<<"\n\n\n Veuillez bien faire votre choix SVP\n\n\n";
    main();
}
cout<<"AU REVOIR!\n";
return 0;
}

