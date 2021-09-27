#include <iostream>

int main(){
  int num = 324243;
  int *numptr = &num;

  std::cout << "Testing pointers" << '\n';

  std::cout << "Variable value: " << num << std::endl;
  //printing pointer to num variable
  std::cout << "Pointer value: " << numptr << std::endl;
  //dereferencing the pointer
  std::cout << "Dereferencing pointer: " << *numptr << std::endl;

  //reference
  std::cout << "Testing references" << '\n';
  int &numref = num;
  std::cout << "Reference: " << numref << '\n';
  std::cout << "Address of the reference: " << &numref << '\n';

  //changing values through reference
  std::cout << "Changing initial values" << '\n';
  numref += 1;
  std::cout << "Reference after adding one: " << numref << '\n';
  std::cout << "Initial variable value: " << num << std::endl;
  std::cout << "Pointer value: " << numptr << std::endl;
  std::cout << "Address of the reference: " << &numref << '\n';

}
