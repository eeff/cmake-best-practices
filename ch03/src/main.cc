#include <hello/hello.hh>
#include <hello_header_only/hello.hh>
#include <hello_object/hello.hh>

int main()
{
  hello::Hello hello("John Doe");
  hello.greet();

  hello_header_only::print_hello("John Doe");

  hello_object::HelloObject hello_obj("John Doe");
  hello_obj.greet();

  return 0;
}
