#include <iostream>

int main() {
  int a,b;
  
  int s=0;
  std::cout << "Enter a: ";
  std::cin >> a;
  while (a<1) {
    std::cout << "Enter a: ";
    std::cin >> a;
  }
  
  std::cout << "Enter b: ";
  std::cin >> b;
    
  for(int i=a; i<=b; i++)
    s+=i;
    
  std::cout << "The sum is " << s << std::endl;
  
  return 0;
}

