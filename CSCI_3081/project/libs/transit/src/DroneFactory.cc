#include "DroneFactory.h"
#include "drone.h"

IEntity* DroneFactory::CreateEntity(JsonObject& entity){

  Drone* entityPtr = nullptr;

  entityPtr = new Drone(entity);

  return entityPtr;
}

DroneFactory::DroneFactory() {}
