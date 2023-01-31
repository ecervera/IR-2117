#include <iostream>

int main() {
  int a,b;
  
  int s=0;
  do {
    std::cout << "Enter a: ";
    std::cin >> a;
  } while (a<1);
  
  do {
    std::cout << "Enter b: "; 
    std::cin >> b;  
  } while (b<a);
 
  for(int i=a; i<=b; i++)
    s+=i;
    
  std::cout << "The sum is " << s << std::endl;
  
  return 0;
}

