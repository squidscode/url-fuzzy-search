#pragma once


class IReadable {
public:
  virtual char getc() = 0;
  virtual char* getline() = 0;
  virtual bool iseof() = 0;
};
