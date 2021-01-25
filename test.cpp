#include "messages.h"
#include <iostream>
#include <stdexcept>

int main(){
  //TESTING FLIT
  Flit test_flit = Flit();
  if (test_flit.is_header()){throw std::runtime_error("Default test flit has is_header=True");}
  Flit test_flit2 = Flit(true);
  if (!test_flit2.is_header()){throw std::runtime_error("Failed to set test flit is_header=True");}

  //TESTING MESSAGE
  int dest[2] = {3,2};
  Message test_msg = Message(dest);
  int * test = test_msg.get_dest();
  if (test[0] != 3 || test[1] != 2){throw std::runtime_error("Failed to set message destination");}
  
  
  return 0;
}
