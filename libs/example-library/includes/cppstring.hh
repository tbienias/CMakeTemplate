#ifndef CPPSTRING_HH
#define CPPSTRING_HH

#include "examplelibrary_export.h"
#include <string>

class EXAMPLELIBRARY_EXPORT CppString
{
  public:
    auto getHello() -> std::string;

  private:
    const std::string _helloStr = "Hello C++";
};

#endif // CPPSTRING_HH
