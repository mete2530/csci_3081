#include "CompositeFactory.h"



IEntity* CompositeFactory::CreateEntity(JsonObject& entity){

  std::string type = entity["type"];

  IEntity* entityPtr = nullptr;
  if (type == "drone") {
      entityPtr = componentFactories[0]->CreateEntity(entity);
  } else if (type == "robot") {
      entityPtr = componentFactories[1]->CreateEntity(entity);
  }
  return entityPtr;
}


void CompositeFactory::AddFactory(IEntityFactory* factoryEntity){
  componentFactories.push_back(factoryEntity);

}
