#include "greeter.hh"
#include "cppstring.hh"

auto main(int argc, char **argv) -> int
{
    CppString cppstring;
    Greeter greeter;
    greeter.greet(cppstring.getHello());
    return 0;
}
