#include "header.h"

void get_indexes(struct node *ll, int num, int *getIndexCurrent, int *getIndexPrevious) {

  *getIndexCurrent=ll[0].next;                           // basically uses the same structure as
  *getIndexPrevious=0;                                   // search function, and passes the values
                                                         // of the current node and next node indexes
    while(ll[*getIndexCurrent].next != MYNULL) {         // to variables accessible to other functions
      if(num != ll[*getIndexCurrent].data) {
        *getIndexPrevious=*getIndexCurrent;              // I originally worked this functionality into
        *getIndexCurrent=ll[*getIndexCurrent].next;      // search function, however the extra variables
      }                                                  // in the search function were out of spec according
      else {                                             // to the instructions
        *getIndexCurrent=*getIndexCurrent;               // it was however, more efficient
        break;                                           // Now I basically run search twice if a number is found
      }                                                  // and needs to be deleted
    }

    if (num == ll[*getIndexCurrent].data) {              // this handles the case when a number is at the end
      *getIndexCurrent=*getIndexCurrent;                 // of the list
    }
}
