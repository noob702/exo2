#include <iostream>
#include "Etudiant.hpp"
#include "Parcours.hpp"

int main() 
{
    Parcours p("Phe");
    Etudiant e1("Nille", &p);
    std::cout << "Nom de l'etudiant: " << student.getName() << std::endl;
    std::cout << "parcours de l'etudiant: " << student.getParcours()->getParcours() << std::endl;
    return 0;
}