#include <CL/cl.h>
#include <memory>
#include <iostream>

struct Foo {
  Foo() { std::cout << "Foo...\n"; }
  ~Foo() { std::cout << "~Foo...\n"; }
};

int main()
{
  // OCL part
  cl_uint number_of_platforms = 0;
  clGetPlatformIDs(0, nullptr, &number_of_platforms);
  std::cout << "Number of platforms: " << number_of_platforms << "\n";

  // Shared pointer part
  std::cout << "constructor with object\n";
  std::shared_ptr<Foo> sh1(new Foo);
}
