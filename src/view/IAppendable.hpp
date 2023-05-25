#pragma once

class IAppendable {
public:
  virtual void appendc(char c) = 0;
  virtual void append(char* str) = 0;
};