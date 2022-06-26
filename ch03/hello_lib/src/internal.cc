#include <iostream>

#include "internal.hh"

namespace hello {
namespace details {

  void print_impl(const std::string& name)
  {
    std::cout << "Hello " << name << " from hello lib" << std::endl;
  }

}
}
