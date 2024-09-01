#include "Etudiant.hpp"

Etudiant::Etudiant(const std::string& name, Parcours* parcours) : name(name), parcours(parcours) {}

void Etudiant::setName(const std::string& name) {
    this->name = name;
}

std::string Etudiant::getName() const {
    return name;
}

void Etudiant::setParcours(Parcours* parcours) {
    this->parcours = parcours;
}

Parcours* Etudiant::getParcours() const {
    return parcours;
}