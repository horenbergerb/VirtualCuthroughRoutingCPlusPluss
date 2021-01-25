#include "messages.h"
#include <iostream>

int main(){
  Flit test_flit = Flit();
  Flit test_flit2 = Flit(true);
  std::cout << "is header: " << test_flit.is_header() << " \n";
  std::cout << "is header: " << test_flit2.is_header() << " \n";
  std::cout << "dim: " << test_flit.dim << " \n";
  std::cout << "dim: " << test_flit2.dim << " \n";

  int dest[2] = {3,2};
  Message test_msg = Message(dest);
  cout << "length: " << test_msg.length << " \n";
  
  
  
  return 0;
}
