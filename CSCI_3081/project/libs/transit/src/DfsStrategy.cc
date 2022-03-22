#include "DfsStrategy.h"

DfsStrategy::DfsStrategy(Vector3 pos_, Vector3 des_, Igraph* graph_) : IStrategy{
  lastPos = pos_;
  dest = des_;
  graph = graph_;
  path = graph -> GetPath(graph, lastPos, dest);
}

void DfsStrategy::Move(IEntity* entity, double dt){
  Drone.GetPosition(currentindex);
  DepthFirstSearch.GetPath(graph, lastPos, dt);
}
 
bool DfsStrategy::IsCompleted(){
  if(dest = lastPos){
    return true'
  }
  else false;
}
