#include <iostream>
#include "notes.h"

int main() {

    Notes *N1 = new Notes( 10, 12, 15, 11, 17, 9.5 );
    Notes *N2 = new Notes( 11.5, 13, 18, 10, 12.5 );

    std::cout << "Moyenne de N1: " << N1->calculMoyenne() << std::endl;
    std::cout << "Moyenne de N2: " << N2->calculMoyenne() << std::endl;
}