#pragma once

#include "../view/IReadable.hpp"

class IController {
public:
  virtual void run(IReadable input) = 0;
};