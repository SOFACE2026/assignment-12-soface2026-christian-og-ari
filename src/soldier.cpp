#include "soldier.hpp"
#include "weapon.hpp"
#include <sstream>

Soldier::Soldier(std::string name, Weapon *weapon) : weapon(weapon), name(name)
{
}

void Soldier::shootAt(Unit &unit)
{
    // bruger våbnet til at skyde på en anden
    this->weapon->shootAt(unit);
}

void Soldier::takeHit(Projectile &projectile)
{
    // formater en besked om at soldaten er blevet ramt og hvor meget skade det gjorde via en stringstream
    std::stringstream ss;
    ss << this->name << " got hit for " << projectile.damage << " damage";
    
    // laver event og sender det til alle observers
    UnitEvent e;
    e.message = ss.str();
    this->notify(e);
}