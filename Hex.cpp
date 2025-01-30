#include "include/Hex.hpp"

#include <cstddef>
#include <iostream>
#include <stdexcept>

Hex::Hex() {}

Hex::~Hex() {}

std::string Hex::hex_input()
{
  std::string input;
  std::cout << "Write a hex string\n";
  std::cin >> input;
  return input;
}

std::string Hex::hex_to_ascii(std::string& hex)
{
  std::string ascii = "";

  // chech for valid input length // each hex byte is 2 characters
  if (hex.length() % 2 != 0)
  {
    throw std::invalid_argument("Invalid hex string length");
  }

  for (size_t i = 0; i < hex.length(); i += 2) // increment by 2, sinces each ASCII character is prepresented by 2 hex digits
  {
    std::string str = hex.substr(i, 2); // extract a 2 character substring.

    char ch = std::stoul(str, nullptr, 16); // convert hex string to int and cast to char

    ascii += ch; // append the decoded char to the output string
  }

  return ascii;
}
