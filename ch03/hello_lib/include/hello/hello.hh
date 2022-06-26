#ifndef HELLO_HELLO_HH
#define HELLO_HELLO_HH

#include <string>

namespace hello {

class Hello {
  public:
  Hello(const std::string& name)
      : name_(name)
  {
  }

  void greet() const;

  private:
  std::string name_;
};

}

#endif
