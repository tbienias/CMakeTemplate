#ifndef GREETER_HH
#define GREETER_HH

#include <string>

class Greeter final
{
  public:
    auto greet(const std::string message) const -> void;
};

#endif // GREETER_HH
