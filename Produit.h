#ifndef PRODUIT_H_INCLUDED
#define PRODUIT_H_INCLUDED
#include <vector>
#include "Categorie.h"

class Produit{
    int id;
    string nom;
    int nb_cat;
public:
    Categorie cat[3];
    Produit();
    Produit(int, string, Categorie);
    void aff();
    void ajouter(Categorie);
    void supprimer(int);
};

Produit::Produit(){
    id = 0;
    nom = "";
    nb_cat = 0;
    Categorie c;
    for (int i=0;i<3;i++){
        cat[i]=c;
    }
}

Produit::Produit(int i, string s, Categorie c){
    id = i;
    nom = s;
    cat[0] = c;
    nb_cat = 1;
}

void Produit::aff(){
    cout <<"ID : "<<id<<endl<<"Nom : "<<nom<<endl<<"Nb_Cat : "<<nb_cat<<endl<<"Categorie : "<<endl;
    for(int i=0;i<nb_cat;i++){
        cout<<"Categorie "<<i<<" : "<<endl;
        cat[i].Aff();
    }
}

void Produit::ajouter(Categorie c){
    if (nb_cat<3){
    int i=0;
    bool test=false;
        while(i<3 && !test){
            if (cat[i].id==c.id){
                test = true;
                cout <<"Imossible d\'ajouter une categorie existante!!"<<endl;
            }else if (cat[i].id==0){
                cat[i]=c;
                break;
            }else{
                i++;
            }
        }
        if(i==3 && !test){
            cout << "3 Categorie existantes!!"<<endl;
        }else{
            nb_cat++;
            cout << "Categorie ajouté avec succés!"<<endl;
        }

    }
}

void Produit::supprimer(int id){
    Categorie aux;
    for (int i;i<3;i++){
        if (cat[i].id==id){
            cat[i].id=0;
            cat[i].nom=="";
            for (int j=i-1;j<nb_cat-1;j++){
                aux = cat[j];
                cat[j]=cat[j+1];
                cat[j+1]=aux;
            }
            break;
        }
    }
}
#endif // PRODUIT_H_INCLUDED
