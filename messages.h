class Flit{
public:
  Flit(bool = false);
  bool is_header();
private:
  bool header = false;
};

class Message{
public:
  static int length;
  
  Message(int *);
  
  void set_next_dest(Message * next_dest);
  //Attempts to send a flit to next_dest
  bool send_flit();
  //Whether the message has been completely transmitted to next_dest
  bool is_done();
  //Whether the message is ready to be passed a flit
  bool is_ready();
  
private:
  //The ultimate destination router
  int * dest;
  //The next message object to which we will send flits
  Message * next_dest = NULL;
  int moved = 0;

};
