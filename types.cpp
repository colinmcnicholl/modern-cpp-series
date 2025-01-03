#include <iostream>
#include <string>

int main()
{
  int64_t x{422359870235};
  std::cout << x << std::endl;
  std::cout << sizeof(x) << std::endl;

  bool y{false};
  std::cout << y << std::endl;
  std::cout << sizeof(y) << std::endl;

  float z{3.14f};
  std::cout << z << std::endl;
  std::cout << sizeof(z) << std::endl;

  float n{3.14321234567890f};
  std::cout << n << std::endl;
  std::cout << sizeof(n) << std::endl;

  double p{3.14321234567890};
  std::cout << p << std::endl;
  std::cout << sizeof(p) << std::endl;

  char q{'a'};
  std::cout << q << std::endl;
  std::cout << sizeof(q) << std::endl;

  const char* r{"abc"};
  std::cout << r << std::endl;
  std::cout << sizeof(r) << std::endl;

  std::string s{"def"};
  std::cout << s << std::endl;
  std::cout << sizeof(s) << std::endl;

  return 0;
}
