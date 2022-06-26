#include <iostream>

#include "hello_object/hello.hh"

namespace hello_object {

void HelloObject::greet() const
{
  std::cout << "Hello " << name_ << " from hello object library" << std::endl;
}

}
