#include "hello/hello.hh"

#include "internal.hh"

namespace hello {

void Hello::greet() const
{
  details::print_impl(name_);
}

}
