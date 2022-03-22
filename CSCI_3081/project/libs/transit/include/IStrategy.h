#ifndef ISTRATEGY_H_
#define ISTRATEGY_H_

#include "util/json.h"
#include "graph.h"
#include "entity.h"

class IStrategy {
public:
    virtual void Move(IEntity* entity, double dt) {}
    virtual bool IsCompleted() {return false;}

private:
    IGraph* graph;
};

#endif
