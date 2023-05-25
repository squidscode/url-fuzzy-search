#pragma once

#include "IEvent.hpp"

#define event_id unsigned int

class IWatcher {
public:
  virtual event_id add_event(IEvent event) = 0;

}