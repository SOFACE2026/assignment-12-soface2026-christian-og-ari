#include "revolver.hpp"

Revolver::Revolver() : projectile(0) // Initialiserer projektil med 0 skade
{
}

Projectile &Revolver::get_projectile()
{
    // Returnerer reference til projektilet som Revolver skyder
    return this->projectile;
}