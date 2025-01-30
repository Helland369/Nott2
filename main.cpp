#include "include/Binary.hpp"
#include "include/Hex.hpp"
#include <iostream>

int main(int argc, char** argv)
{
  Binary bin;
  Hex hex;

  short choice;
  std::string input;
  
  for (;;)
  {
    std::cout << "[1] Binary to ascii\n" << "[2] Hex to ascii\n";
    std::cin >> choice;

    switch (choice)
    {
      case 1:
        input = bin.binary_input();
        std::cout << bin.binary_to_ascii(input) << "\n";
        input = "";
        break;
      case 2:
        input = hex.hex_input();
        std::cout << hex.hex_to_ascii(input) << "\n";
        input = "";
        break;
      default:
        std::cout << "Invalid choice\n";
        break;
    }
  }
  return 0;
}
