# Overview

The goal here is to rewrite the simulation of virtual cut-through routing in C++.
I'm going to try and make some optimizations, i.e. avoiding searches wherever possible.
I'm also not sure how efficient classes are in C++. I should research this.

# Notes

I added the file ".dir-locals.el" with the contents:

((c-mode . ((mode . c++))))

https://stackoverflow.com/questions/3312114/how-to-tell-emacs-to-open-h-file-in-c-mode/6912415#6912415
This should make header files open in c++ mode in emacs.

# TO DO

* Implement the way in which messages hold and pass flits
  - Each message holds a linked list of flits?
  - Each message holds a next_msg pointer and move() moves a flit to next_msg?
    * If successful, it pops a flit locally
  - Need a function like is_done() which flags msg for deletion when all flits are moved?
  - Would be nice to raise exception if you receive more flits than you were supposed to
    * Could remove the counter tracking this later (for efficiency)
  - Create a good test suite for this stuff