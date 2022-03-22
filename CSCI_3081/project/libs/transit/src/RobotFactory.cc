#include "../include/RobotFactory.h"
#include "robot.h"

IEntity* RobotFactory::CreateEntity(JsonObject& entity){

  Robot* entityPtr = nullptr;

  entityPtr = new Robot(entity);

  return entityPtr;
}

RobotFactory::RobotFactory() {}
