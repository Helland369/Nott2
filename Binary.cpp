#include "include/Binary.hpp"

#include <bitset>
#include <iostream>
#include <sstream>

Binary::Binary() {}

Binary::~Binary() {}

std::string Binary::binary_input()
{
  std::string input;
  std::cout << "Write a binary string\n";
  std::cin >> input;
  return input;
}

std::string Binary::binary_to_ascii(std::string& binaryString)
{
  std::string text = "";

  std::stringstream sstream(binaryString); // extract 8 bit binary sequences one at the time

  while (sstream.good()) // run untill there is no more numbers in sstream
    {
      
      std::bitset<8> bits; // represents a fixed-size 8 bit bunary number

      sstream >> bits; // reads the next 8 bit binary segment from the std::stringstream into bits

      text += char(bits.to_ulong()); // convert the binary number to a 32bit uint.
    }

  return text;
}
