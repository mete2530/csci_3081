#ifndef DRONEFACTORY_H
#define DRONEFACTORY_H

#include "IEntityFactory.h"

class DroneFactory : public IEntityFactory {
public:

  ~DroneFactory() {};

  DroneFactory();

  IEntity* CreateEntity(JsonObject& entity);


};

#endif
