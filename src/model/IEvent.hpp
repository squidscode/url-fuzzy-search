#pragma once

#include <functional>
#include <ctime>

class IEvent {
public:
  virtual unsigned int execute_count() const = 0;
  virtual void execute() const = 0;
  virtual time_t get_expriation() const = 0;
  virtual time_t get_frequency() const = 0;
  virtual bool has_expired() const = 0;
  virtual bool should_execute() const = 0;
};