#ifndef HELLO_OBJECT_HELLO_HH
#define HELLO_OBJECT_HELLO_HH

#include <string>

namespace hello_object {

class HelloObject {
  public:
  HelloObject(const std::string& name)
      : name_(name)
  {
  }

  void greet() const;

  private:
  std::string name_;
};

}

#endif
