#include <iostream>
using namespace std;
#include "header.h"

int main()
{
    Adresse a, a1(2, "Rue des roses", 2045, "Tunis");
    a.Affich();
    a1.Affich();

    Personne p, p1("15012724", "Drira", "Youssef", a1);
    p.Affich();
    p1.Affich();

    return 0;
}
