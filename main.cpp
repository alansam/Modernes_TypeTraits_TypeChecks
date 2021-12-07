
#include <iostream>
#include <iomanip>
#include <type_traits>
#include <string>

#include "integral.hpp"
#include "integral.hpp"

//  MARK: - Reference.
//  @see: https://www.modernescpp.com/index.php?option=com_content&view=article&id=597&catid=55

struct A {
  int a;
  int f(int) { return 2011; }
};

enum E {
  e = 1,
};

union U {
  int u;
};

int fit_the_first(int argc, char const * argv[]);
int fit_the_second(int argc, char const * argv[]);

int main(int argc, char const * argv[]) {

  std::cout << std::string(70, '=');
  fit_the_first(argc, argv);
  std::cout << std::string(70, '=');
  fit_the_second(argc, argv);

  return 0;
}

int fit_the_first(int argc, char const * argv[]) {

  // using namespace std;
  
  std::cout <<  std::boolalpha <<  '\n';

  std::cout << "std::is_void<void>::value: "
            << std::is_void<void>::value << '\n';                               // true
  std::cout << "std::is_integral<short>::value: "
            << std::is_integral<short>::value << '\n';                          // true
  std::cout << "std::is_floating_point<double>::value: "
            << std::is_floating_point<double>::value << '\n';                   // true
  std::cout << "std::is_array<int []>::value: "
            << std::is_array<int []>::value << '\n';                            // true
  std::cout << "std::is_pointer<int*>::value: "
            << std::is_pointer<int*>::value << '\n';                            // true
  std::cout << "std::is_null_pointer<std::nullptr_t>::value: "
            << std::is_null_pointer<std::nullptr_t>::value << '\n';                  // true
  std::cout << "std::is_member_object_pointer<int A::*>::value: "
            << std::is_member_object_pointer<int A::*>::value <<  '\n';         // true
  std::cout << "std::is_member_function_pointer<int (A::*)(int)>::value: "
            << std::is_member_function_pointer<int (A::*)(int)>::value << '\n'; // true
  std::cout << "std::is_enum<E>::value: "
            << std::is_enum<E>::value << '\n';                                  // true
  std::cout << "std::is_union<U>::value: "
            << std::is_union<U>::value << '\n';                                 // true
  std::cout << "std::is_class<std::string>::value: "
            << std::is_class<std::string>::value << '\n';                            // true
  std::cout << "std::is_function<int * (double)>::value: "
            << std::is_function<int * (double)>::value << '\n';                 // true
  std::cout << "std::is_lvalue_reference<int &>::value: "
            << std::is_lvalue_reference<int &>::value << '\n';                  // true
  std::cout << "std::is_rvalue_reference<int &&>::value: "
            << std::is_rvalue_reference<int &&>::value << '\n';                 // true

  std::cout << std::endl;

  return 0;
}

int fit_the_second(int argc, char const * argv[]) {

  std::cout << std::boolalpha << '\n';

  std::cout << "std::is_integral<int>::value: " << std::is_integral<int>::value << '\n';
  std::cout << "rgr::is_integral<int>::value: " << rgr::is_integral<int>::value << '\n';    // (1)

  std::cout << "std::is_integral<double>::value: " << std::is_integral<double>::value << '\n';
  std::cout << "rgr::is_integral<double>::value: " << rgr::is_integral<double>::value << '\n';

  std::cout << '\n';

  std::cout << "std::true_type::value: " << std::true_type::value << '\n';
  std::cout << "rgr::true_type::value: " << rgr::true_type::value << '\n';

  std::cout << "std::false_type::value: " << std::false_type::value << '\n';
  std::cout << "rgr::false_type::value: " << rgr::false_type::value << '\n';

  std::cout << '\n';

  std::cout << "std::integral_constant<bool, true>::value: " << std::integral_constant<bool, true>::value << '\n';
  std::cout << "rgr::integral_constant<bool, true>::value: " << rgr::integral_constant<bool, true>::value << '\n';

  std::cout << "std::integral_constant<bool, false>::value: " << std::integral_constant<bool, false>::value << '\n';
  std::cout << "rgr::integral_constant<bool, false>::value: " << rgr::integral_constant<bool, false>::value << '\n';  

  std::cout << std::endl;

  return 0;
}
