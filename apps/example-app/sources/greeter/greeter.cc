#include "greeter.hh"
#include <iostream>

auto Greeter::greet(const std::string message) const -> void
{
    std::cout << message << std::endl;
}
