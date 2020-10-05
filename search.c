#include "header.h"

int search(struct node *ll, int x) {
  int searchIndexCurrent;

  int i=ll[0].next;
  int searchIndexPrevious=0;

    while(ll[i].next != MYNULL) {     // increment through the numbers in list
      if(x != ll[i].data) {           // by starting at the 0 index and following
        searchIndexPrevious=i;        // the node.next values as the following index
        i=ll[i].next;                 // compare the search value to the node.value
      }                               // if the values are equivalent then
      else {                          // return 1 for found
        searchIndexCurrent=i;
        return 1; //match
      }
    }
    if (x == ll[i].data) {            // this handles the end case
      searchIndexCurrent=i;           // returning a 1 if it matches 
      return 1;                       // match
    }
    else {
      return 0;                       // if nothing matches return 0
    }
  }
