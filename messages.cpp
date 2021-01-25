#include "messages.h"
#include <stdexcept>

Flit::Flit(bool header): header(header){}

bool Flit::is_header(){return header;}


//default dimensions for message
int Message::length = 5;

Message::Message(int * dest): dest(dest){}

void set_next_dest(Message * new_dest){next_dest = new_dest;}

bool is_ready(){
  
}

bool send_flit(){
  if (next_dest == NULL){return false;}
  
}

int * Message::get_dest(){return dest;}
