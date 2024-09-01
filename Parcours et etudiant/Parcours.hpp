#ifndef PARCOURS_H
#define PARCOURS_H

#include <string>

class Parcours
 {

    public:
         Parcours(const std::string& name);
         void setParcours(const std::string& name);
         std::string getParcours() const;
    private:
    std::string parcoursName;

};

#endif // PARCOURS_H