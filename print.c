#include "header.h"

void print(struct node *ll) {

  if(ll[0].next == MYNULL) {          // initially checks if the 0 index node
    printf("NO CURRENT ENTRIES\n");   // point to MYNULL, if so then list is 
  }                                   // empty and prints NO CURRENT ENTRIES
  else {
    int i=ll[0].next;                 // if the list is not empty 
    while(1) {                        // it will print out each value
      if(ll[i].next != MYNULL) {      // following the node.next value
        printf("%d ", ll[i].data);    // used to point to the index of
        i=ll[i].next;                 // the next element
      }
      else {
        printf("%d\n", ll[i].data);   // handles the last element in the list
        break;                        // then breaks the while looop and
      }                               // ends the function
    }
  }
}

