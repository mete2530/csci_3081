#ifndef IENTITYFACTORY_H_
#define IENTITYFACTORY_H_

#include "entity.h"

class IEntityFactory {
public:
  
  virtual ~IEntityFactory() {};
  virtual IEntity* CreateEntity(JsonObject& entity) = 0;

};

#endif
