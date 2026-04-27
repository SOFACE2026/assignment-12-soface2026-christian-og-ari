#include "unit_selection.hpp"
#include "weapon.hpp"

void UnitSelection::addToSelection(Unit &unit)
{
    // gemmer en pointer til enheden i listen
    this->selected.push_back(&unit);
}

void UnitSelection::shootAt(Unit &unit)
{
    // lader alle valgte enheder skyde på den givne enhed
    for (auto &u : this->selected)
    {
        u->shootAt(unit);
    }
}

void UnitSelection::takeHit(Projectile &projectile)
{
    // area damage (skade på alle valgte enheder)
    for (auto &u : this->selected)
    {
        u->takeHit(projectile);
    }
}