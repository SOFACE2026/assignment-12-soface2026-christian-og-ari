#include <iostream>
#include "battle_monitor.hpp"

void BattleMonitor::do_update(void *event)
{
    // Cast event til UnitEvent for at få adgang til beskeden
    UnitEvent *e = static_cast<UnitEvent *>(event);
    
    // Tilføj beskeden til monitorens liste over beskeder
    this->messages.push_back(e->message);
    
    // printer til konsollen 
    std::cout << e->message << std::endl;
}