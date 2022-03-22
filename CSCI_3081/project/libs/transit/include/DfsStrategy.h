#ifndef DFSSTRATEGY_H_
#define DFSSTRATEGY_H_

#include "routing_api.h"
#include "image.h"
#include "routing/depth_first_search.h"
#include "IStrategy.h"
#include <vector>

class AstarStrategy : public IStrategy {
public:
  DfsStrategy(Vector3 pos_, Vector3 des_, Igraph* graph__);
  ~DfsStrategy();
  void Move(IEntity* entity, double dt);
  bool IsCompleted();

protected:
  Vector3 des; 
  Vector3 lastPos; 
  std::vector<vector <float>> path;
  int currentindex;
  int maxindex;    
  IGraph* graph;
};

#endif
