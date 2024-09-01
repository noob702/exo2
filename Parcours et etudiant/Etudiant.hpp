#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>
#include "Parcours.hpp"

class Etudiant 
{
public:
    Etudiant(const std::string& name, Parcours* parcours);
    void setName(const std::string& name);
    std::string getName() const;
    void setParcours(Parcours* parcours);
    Parcours* getParcours() const;
 private:
    std::string name;
    Parcours* parcours;
};

#endif // ETUDIANT_H