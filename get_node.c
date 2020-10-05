#include "header.h"

int get_node(struct node *ll) {
  int i=0;                       // initialize the index counter to 0

  while(i<100) {                 // parse through each element
    if (ll[i].valid == 0) {      // incrementally starting with
      break;                     // index 0, if an element has
    }                            // a 0 value in the node.valid field
      i++;                       // then break the increment loop
    }                            // and return the index value
  if (i > 99) {
    return 0;                    // there is no space left in array
  }                              // so it returns 0

return i;
}
