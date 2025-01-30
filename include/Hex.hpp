#pragma once

#include <string>

class Hex
{
private:

public:

  Hex();
  ~Hex();

  std::string hex_input();
  
  std::string hex_to_ascii(std::string& hex);
  
};   
