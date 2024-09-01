#include "Parcours.hpp"

Parcours::Parcours(const std::string& name) : parcoursName(name) 
{

}
void Parcours::setParcours(const std::string& name) {
    parcoursName = name;
}

std::string Parcours::getParcours() const 
{
    return this->parcoursName;
}