/* --------------------------- 
Laboratoire : 02
Auteur : Alan Tournaud 
Date : 25.09.2026
But : Calcul du temps de trajet 
Remarque(s) : 
--------------------------- */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double distance1 = 6;
double vitesse1 = 5;

double cote_a = 10 - 6;
double cote_b = 3;
double vitesse2 = 2;

/**
 *
 * @return
 */
int main() {
    cout << "Calcul du temps de parcours du robot" << endl;

    double temps1 = distance1 / vitesse1;
    cout << "Temps necessaire pour parcourir la premiere portion : " << temps1 << " heures" << endl;

    double distance2 = sqrt(cote_a * cote_a + cote_b * cote_b);
    double temps2 = distance2 / vitesse2;

    cout << "Temps necessaire pour parcourir la deuxieme portion : " << temps2 << " heures" << endl;

    cout << "Temps total necessaire pour atteindre l'objet : " << temps1 + temps2 << " heures" << endl;





    return EXIT_SUCCESS;
}