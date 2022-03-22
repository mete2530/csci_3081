#ifndef ROBOTFACTORY_H
#define ROBOTFACTORY_H

#include "IEntityFactory.h"

class RobotFactory : public IEntityFactory {
public:

  ~RobotFactory() {};

  RobotFactory();

  IEntity* CreateEntity(JsonObject& entity);


};

#endif
