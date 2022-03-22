#ifndef COMPOSITEFACTORY_H_
#define COMPOSITEFACTORY_H_

#include "controller.h"
#include "RobotFactory.h"
#include "DroneFactory.h"



class CompositeFactory {
public:
  std::vector<IEntityFactory*> componentFactories;

  ~CompositeFactory() {}

  IEntity* CreateEntity (JsonObject& entity) ;

  void AddFactory(IEntityFactory* factoryEntity) ;


};


#endif
