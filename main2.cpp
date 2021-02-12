#include <iostream>
using namespace std;
#include "Produit.h"
#include "Client.h"
#include "Commande.h"

int main(){
    Categorie c(1, "gmc"), c1(2, "rbk");
    c.Aff();
    c1.Aff();
    Produit p1(1, "Sticker", c);
    p1.aff();
    p1.ajouter(c1);
    p1.aff();
    cout<<"Supprimer"<<endl;
    p1.supprimer(1);
    p1.aff();

    return 0;
}
